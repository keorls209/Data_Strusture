#include<iostream>
#include<list>
#include"Edges.h"
using namespace std;
#pragma once
class Vertex
{
public:
	int State_id;
	string State_name;
	list<Edges> edgeList;

	Vertex();
	Vertex(int id, string name);
	void addEdge(Edges& edge);
	int getStateid();
	string getStatename();
	void setID(int id);
	void setStateName(string name);
	list<Edges>& getEdges();

};
 
