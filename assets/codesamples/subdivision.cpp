void Mesh::LoopSubdivisionNewPositions() {
// Calculate new positions of vertices based on current cage
  Vertex *vertA;
  Vertex *vertB;
  Vertex *vertC;
  Vertex *vertD;
  Vertex *newVert;
  Edge *e = NULL;
  std::vector<Vertex *> newTriVerts;
  std::vector<Vertex *> middleTriVerts;

  int numNewVerts = 0;

  // Store old vertex locations
  for (int i=0; i<vertices.size(); i++) {
    vertices[i]->setOldPos(vertices[i]->getPos());
  }

  // Calculate new positions for these verts
  for (triangleshashtype::iterator iter = triangles.begin(); iter != triangles.end(); iter++) {

    Triangle *t = iter->second;
    std::vector<Vertex *> surroundingVerts;
    int numSurroundingVerts;
    glm::vec3 newPos;
    for (int i=0; i<3; i++) {
      surroundingVerts.clear();
      numSurroundingVerts = 0;

      Vertex *v = (*t)[i];

      Edge *startingEdge = t->getEdge();
      while (startingEdge->getStartVertex()->getIndex() != v->getIndex()) {
          startingEdge = startingEdge->getNext();
      }


      bool goOtherWay = false;
      Edge *loop = startingEdge;
      // Check for cases of boundary edges in open meshes
      do {
        // If boundary edge...
            if (loop->getOpposite() == NULL) {

                glm::vec3 factorA = v->getOldPos();
                factorA *= 0.75;
          
                glm::vec3 factorB = loop->getNext()->getStartVertex()->getOldPos();
                factorB *= 0.125;

          // Find other boundary edge
          Edge* otherBoundaryEdge = loop->getNext()->getNext();
          while (!(otherBoundaryEdge->getOpposite() == NULL)) {
            otherBoundaryEdge = otherBoundaryEdge->getOpposite()->getNext()->getNext();
          }
          Vertex *c = otherBoundaryEdge->getStartVertex();
                glm::vec3 factorC = c->getOldPos();
          factorC *= 0.125;

                newPos = factorA + factorB + factorC;
          break;

            }
            else {

                numSurroundingVerts++;
                Vertex *connectedV = loop->getOpposite()->getStartVertex();
                surroundingVerts.push_back(connectedV);

            }
            Edge *checkingEdge = getNextEdge(loop, goOtherWay);
            if (checkingEdge == NULL) {
                loop = startingEdge;
            }
            loop = checkingEdge;

      }
      while (loop != startingEdge);

      // If it's not a boundary edge...
      if (!(loop->getOpposite() == NULL)) {

        float beta;
        if (numSurroundingVerts == 3) {
          beta = 3/16.0;
        }
        else {
          // Weight the new position based on num of surrounding verts
          beta = 3/(8.0 * numSurroundingVerts);
        }
        newPos = v->getOldPos() * (1-numSurroundingVerts*beta);
        for (int j=0; j<numSurroundingVerts; j++) {
          newPos += surroundingVerts[j]->getOldPos() * beta;
        }
      }

      v->setPos(newPos);
    }
  }
}