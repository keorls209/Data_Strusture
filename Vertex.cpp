#include "Vertex.h"

Vertex::Vertex()
{
	State_id = 0;
	State_name = "";

}

Vertex::Vertex(int id, string name)
{
	State_id = id;
	State_name = name;
}

int Vertex::getStateid()
{
	return State_id;
}

string Vertex::getStatename()
{
	return State_name;
}
void Vertex::addEdge(Edges& edge) {
	edgeList.push_back(edge);
}

void Vertex::setID(int id)
{
	State_id = id;

}

void Vertex::setStateName(string name)
{
	State_name = name;
}

list<Edges>& Vertex::getEdges()
{
	return edgeList;
}
