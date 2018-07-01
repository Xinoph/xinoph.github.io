float Radiosity::Iterate() {
// Find the face with the most undistributed light and distribute it to all faces based on face-to-face visibility (form factor)
  if (formfactors == NULL) 
    ComputeFormFactors();
  assert (formfactors != NULL);

  findMaxUndistributed();

  int mup = max_undistributed_patch;

  Face *f = mesh->getFace(mup);
  glm::vec3 undistributedLight = getUndistributed(mup);

  // Distribute the light
  for (int i=0; i<num_faces; i++) {
      float weight = formfactors[i*num_faces+mup];
      Face *f2 = mesh->getFace(i);
      Material *m = f2->getMaterial();

      glm::vec3 light = undistributedLight;
      light *= weight;

      glm::vec3 reflectedLight = light;
      reflectedLight *= m->getDiffuseColor();

      setUndistributed(i, getUndistributed(i)+reflectedLight);
      setRadiance(i, getRadiance(i)+reflectedLight);

      glm::vec3 absorbedLight = light - reflectedLight;
      setAbsorbed(i, getAbsorbed(i)+absorbedLight);

  }
  // This patch has finished distributing its light
  setUndistributed(mup, glm::vec3(0,0,0));

  // return the total light yet undistributed
  // so we can decide when the solution has sufficiently converged
  float totalLight = 0;
  for (int i=0; i<num_faces; i++) {
    undistributedLight = getUndistributed(i);
    totalLight += glm::length(undistributedLight);
  }

  return totalLight;
}