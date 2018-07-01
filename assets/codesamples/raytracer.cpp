glm::vec3 RayTracer::TraceRay(Ray &ray, Hit &hit, int bounce_count) const {
// Cast a ray, see if it hits something, & determine what to do if there is a collision
...
  // ----------------------------------------------
  // add contributions from each light & calculate shadows
  int num_lights = mesh->getLights().size();
  for (int i = 0; i < num_lights; i++) {

    Face *f = mesh->getLights()[i];
    glm::vec3 lightColor = f->getMaterial()->getEmittedColor() * f->getArea();
    glm::vec3 myLightColor;
    glm::vec3 lightCentroid = f->computeCentroid();
    glm::vec3 dirToLightCentroid = glm::normalize(lightCentroid-point);

    float distToLightCentroid = glm::length(lightCentroid-point);
    myLightColor = lightColor / float(M_PI*distToLightCentroid*distToLightCentroid);

    bool shadowIntersect = false;
    if (shadowCasts > 0) {
      myLightColor /= (shadowCasts+1);
    }
    std::vector<glm::vec3> samples;
    getSamples(samples, rtShadowCasts, shadowCasts);

    // Get light information
    // Since samples returns a range of 0..1 for x,y of the face, need to transform that to world coords
    glm::vec3 a = (*f)[0]->get();
    glm::vec3 b = (*f)[1]->get();
    glm::vec3 c = (*f)[2]->get();
    double w = glm::length(a-b);
    double h = glm::length(b-c);
    glm::vec3 dirBA = glm::normalize(b-a);
    glm::vec3 dirCB = glm::normalize(c-b);

    // Test shadow rays for intersections
    for (int s=0; s<shadowCasts; s++) {
      shadowIntersect = false;

      glm::vec3 sampleAB = dirBA;
      sampleAB *= samples[s].x * w;
      glm::vec3 sampleBC = dirCB;
      sampleBC *= samples[s].y * h;
      glm::vec3 p = a + sampleAB + sampleBC;
      glm::vec3 dir = glm::normalize(p-point);;

      Ray shadowRay = Ray(point, dir);
      Hit shadowHit = Hit();
      shadowIntersect = CastRay(shadowRay,shadowHit,false);

      RayTree::AddShadowSegment(shadowRay, 0, shadowHit.getT());

      // Check if the only intersection the shadow ray hit is the light
      glm::vec3 collisionPoint = shadowRay.pointAtParameter(shadowHit.getT());
      if (glm::distance(collisionPoint, p) < EPSILON ) {
        shadowIntersect = false;
      }
      if (!shadowIntersect) {
        answer += m->Shade(ray,hit,dir,myLightColor,args);
      }

    }
    answer += m->Shade(ray,hit,dirToLightCentroid,myLightColor,args);
  }
      
  // ----------------------------------------------
  // add contribution from reflection, if the surface is shiny
  glm::vec3 reflectiveColor = m->getReflectiveColor();

  if (glm::length(reflectiveColor) > 0 && bounce_count > 0) {
    glm::vec3 reflectDir = MirrorDirection(normal, ray.getDirection());
    Ray reflectRay = Ray(point, reflectDir);
    Hit reflectHit = Hit();
    answer += TraceRay(reflectRay,reflectHit,bounce_count-1);
    RayTree::AddReflectedSegment(reflectRay, 0, reflectHit.getT());

    answer *= reflectiveColor;
  }
  
  return answer; 
}