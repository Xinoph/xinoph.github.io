void Mesh::EdgeCollapse() {
// Pick an edge to collapse to reduce vert count of mesh
  legalEdges.clear();
  // Pick the shortest edge
  Edge *e = NULL;
  int numLegal = 0;
  for (edgeshashtype::const_iterator edgeIterator = edges.begin(); edgeIterator != edges.end(); edgeIterator++)
  {
    if (legalEdgeRing(edgeIterator->second)) {
      if (e == NULL || e->Length() > edgeIterator->second->Length()) {
        e = edgeIterator->second;
        legalEdges[edgeIterator->first] = edgeIterator->second;
        numLegal++;
      }
    }
    // Need to check edge legality (make sure no duplicate vertices in ring of vertices)
  }
  if (numLegal == 0){
    printf("no more legal collapses\n");
    return;
  }

  // Get the 2 vertices attached to the edge
  Vertex *vertA = e->getStartVertex();
  Vertex *vertB = e->getOpposite()->getStartVertex();

  // Find a new position for the merged vertices
  // Weighs the lengths of the edges surrounding verts A and B
  glm::vec3 newPos;
  float lengthsA = 0;
  float lengthsB = 0;

  Triangle *triA = e->getTriangle();
  Triangle *triB = e->getOpposite()->getTriangle();

  // Remove all triangles around verts A and B
  // by remaking triangles, but omitting ones that share edge connect AB
  std::set<Triangle *> affectedTris;

  bool goOtherWay = false;
  // Loop around A
  Edge *startingEdge = e;
  Edge *loop = startingEdge;
  do {

    affectedTris.insert(loop->getTriangle());
    lengthsA += loop->Length();

    // Get next edge around vertex
    Edge *checkingEdge = getNextEdge(loop, goOtherWay);
    // If both directions find a NULL edge, then end the loop
    if (checkingEdge == NULL) {
      checkingEdge = startingEdge;
    }
    loop = checkingEdge;
  }
  while (loop != startingEdge);

  goOtherWay = false;
  startingEdge = e->getOpposite();
  loop = startingEdge;
  do {

    affectedTris.insert(loop->getTriangle());
    lengthsB += loop->Length();

    // Get next edge around vertex
    Edge *checkingEdge = getNextEdge(loop, goOtherWay);
    // If both directions find a NULL edge, then end the loop
    if (checkingEdge == NULL) {
      checkingEdge = startingEdge;
    }
    loop = checkingEdge;
  }
  while (loop != startingEdge);

  float ratio = lengthsA/(lengthsA+lengthsB);
  newPos = ( (vertA->getPos()*ratio) + (vertB->getPos()*(1.0f-ratio)) );
  Vertex *newVert = addVertex(newPos);

  std::vector<Vertex *> newTriVerts; // form of a1, b1, c1, a2, b2, c2, etc
  for (std::set<Triangle *>::iterator i = affectedTris.begin(); i != affectedTris.end(); i++) {
    Vertex *keep1;
    Vertex *keep2;

    if ((*i)->getID() != triA->getID() && (*i)->getID() != triB->getID()) {
      if ((**i)[0]->getIndex() == vertA->getIndex() || (**i)[0]->getIndex() == vertB->getIndex()) {
        keep1 = (**i)[1];
        keep2 = (**i)[2];
      }
      else if ((**i)[1]->getIndex() == vertA->getIndex() || (**i)[1]->getIndex() == vertB->getIndex()) {
        keep1 = (**i)[2];
        keep2 = (**i)[0];
      }
      else if ((**i)[2]->getIndex() == vertA->getIndex() || (**i)[2]->getIndex() == vertB->getIndex()) {
        keep1 = (**i)[0];
        keep2 = (**i)[1];
      }

      newTriVerts.push_back(newVert);
      newTriVerts.push_back(keep1);
      newTriVerts.push_back(keep2);
    }
  }

  for (std::set<Triangle *>::iterator i = affectedTris.begin(); i != affectedTris.end(); i++) {
    removeTriangle((*i));
  }

  for (int j=0; j<newTriVerts.size(); j+=3) {
    addTriangle(newTriVerts[j],newTriVerts[j+1],newTriVerts[j+2]);
  }

}