#include "Graph.h"

void Graph::addVertex(Vertex newVertex)
{

}
bool Graph::checkVertexExistByID(int id)
{
	bool flag = false;
	for (int  i = 0; i <vertices.size() ; i++)
	{
		if (vertices[i].getStateid() == id)
		{
			flag = true;
			break;
		}

	}
	return flag;
}

void Graph::updateVertex(int id, string name)
{
}

void Graph::deleteVertex(int id)
{
}

void Graph::addEdge(int sourceID, int destinationID, int weight)
{
}

void Graph::updateEdge(int sourceID, int destinationID, int newWeight)
{
}

void Graph::deleteEdge(int sourceID, int destinationID)
{
}

bool Graph::checkIfNeighbors(int sourceID, int destinationID)
{
	return false;
}

vector<int> Graph::getAllNeighbors(int id)
{
	return vector<int>();
}

void Graph::printAllNeighbors(int id)
{
}

void Graph::printGraph() {
    if (vertices.empty()) {
        cout << "Graph is empty." << endl;
        return;
    }

    cout << "\nGraph Contents:" << endl;
    cout << "---------------" << endl;

    for (auto vertexItem : vertices) {
        int id = vertexItem.first;
        Vertex vertex = vertexItem.second;

        cout << "City " << id << " (" << vertex.getStatename() << "): ";

        list<Edges> edges = vertex.getEdges();
        if (edges.empty()) {
            cout << "No connections";
        }
        else {
            for (Edges edge : edges) {
                cout << edge.getVertexID2() << "( Destince: " << edge.getWeight() << "km ) ";
            }
        }
        cout << endl;
    }
}

void Graph::test()
{

	//just for testing
    Vertex v1(1, "New York");
    Vertex v2(2, "Los Angeles");
    Vertex v3(3, "Chicago");
    Vertex v4(4, "Houston");
    Vertex v5(5, "Miami");

    
    Edges e1(1, 2, 3945);  
    Edges e2(1, 3, 1143);  
    Edges e3(2, 1, 3945);  
    Edges e4(2, 4, 2251);  
    Edges e5(3, 1, 1143);  
    Edges e6(3, 4, 1084);  
    Edges e7(4, 2, 2251);  
    Edges e8(4, 5, 1187);  
    Edges e9(5, 4, 1187);  

    
    v1.addEdge(e1);
    v1.addEdge(e2);
    v2.addEdge(e3);
    v2.addEdge(e4);
    v3.addEdge(e5);
    v3.addEdge(e6);
    v4.addEdge(e7);
    v4.addEdge(e8);
    v5.addEdge(e9);

    
    vertices[1] = v1;
    vertices[2] = v2;
    vertices[3] = v3;
    vertices[4] = v4;
    vertices[5] = v5;
}


