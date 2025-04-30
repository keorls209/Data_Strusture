#pragma once
class Edges
{
public:
    int VertexID1;  
    int VertexID2;  
    int Weight;     

	Edges(int v1, int v2, int weight);
	Edges();
	void setEdgesValues(int v1, int v2, int weight);
    void setWeight(int weight);
    int getVertexID1();
    int getVertexID2();
    int getWeight();
};
    