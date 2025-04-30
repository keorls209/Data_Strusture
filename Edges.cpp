#include "Edges.h"


Edges::Edges(int v1, int v2, int weight)
    : VertexID1(v1), VertexID2(v2), Weight(weight) {
}

Edges::Edges() : VertexID1(0), VertexID2(0), Weight(0) {}


void Edges::setEdgesValues(int v1, int v2, int weight) {
    VertexID1 = v1;
    VertexID2 = v2;
    Weight = weight;
}
void Edges::setWeight(int weight) {
    Weight = weight;
}


int Edges::getVertexID1() {
    return VertexID1;
}

int Edges::getVertexID2() {
    return VertexID2;
}


int Edges::getWeight() {
    return Weight;
}


