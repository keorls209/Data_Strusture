#include "Graph.h"

void Graph::addVertex(Vertex newVertex) {
    vertices[newVertex.getStatename()] = newVertex;
}

bool Graph::checkVertexExistByName(string name) {
    return vertices.find(name) != vertices.end();
}

void Graph::updateVertex(string oldName, string newName) {
   
}

void Graph::deleteVertex(string name) {
   
}

void Graph::addEdge(string sourceName, string destinationName, int weight) {
   
}

void Graph::updateEdge(string sourceName, string destinationName, int newWeight) {
   
}

void Graph::deleteEdge(string sourceName, string destinationName) {
   
}

bool Graph::checkIfNeighbors(string sourceName, string destinationName) {
   
}

vector<string> Graph::getAllNeighbors(string name) {
  
}

void Graph::printAllNeighbors(string name) {
   
}
void Graph::saveData(unordered_map<string, Vertex> vertices) {
    fstream data;
    data.open("vertex.txt", ios::out);
    for (const auto& pair : vertices) {
        data << pair.second.State_name << endl;
        for (const auto& edge : pair.second.edgeList) {
            data << edge.vertexName2 << "--" << edge.Weight << " ";
        }
        data << endl;
    }
    data.close();
}
void Graph::BFS(string name)
{
    list <Edges> tmpedge = vertices[name].edgeList;
    unordered_map<string, bool> visiting_state;
    for (const auto& pair : vertices) {
        string name = pair.first;
        visiting_state.insert({ name, false });
    }
    queue<string> cities;
    cities.push(name);
    visiting_state[name] = true;

    while (true) {
        while (!tmpedge.empty()) {
            if (visiting_state[tmpedge.front().vertexName2] == true) {
                tmpedge.pop_front();
                continue;
            }
            cities.push(tmpedge.front().vertexName2);
            visiting_state[tmpedge.front().vertexName2] = true;
            tmpedge.pop_front();
        }
        cout << cities.front() << "  ";
        cities.pop();
        if (!cities.empty()) {
            tmpedge = vertices[cities.front()].edgeList;
        }
        else
            break;
    }
}


void Graph::printGraph() {
    if (vertices.empty()) {
        cout << "Graph is empty." << endl;
        return;
    }

    cout << "\nGraph Contents:" << endl;
    cout << "---------------" << endl;

    for (auto vertexItem : vertices) {
        string name = vertexItem.first;
        Vertex vertex = vertexItem.second;

        cout << "City " << name << " (" << vertex.getStatename() << "): ";

        list<Edges> edges = vertex.getEdges();
        if (edges.empty()) {
            cout << "No connections";
        }
        else {
            for (Edges edge : edges) {
                cout << edge.getVertexName2() << "( Destince: " << edge.getWeight() << "km ) ";
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


    Edges e1("New York", "Los Angeles", 3945); //
    Edges e2("New York", "Chicago", 1143); //
    Edges e3("Los Angeles", "New York", 3945); //
    Edges e4("Los Angeles", "Houston", 2251); //
    Edges e5("Chicago", "New York", 1143); //
    Edges e7("Houston", "Los Angeles", 2251); //
    Edges e8("Houston", "Miami", 1187); //
    Edges e9("Miami", "Houston", 1187); //
    Edges e10("Houston", "New York", 1000);
    Edges e11("New York", "Houston", 1000);
    Edges e12("Houston", "Chicago", 1300);
    Edges e13("Chicago", "Houston", 1300);
    Edges e14("Miami", "New York", 900);
    Edges e15("New York", "Miami", 900);




    v1.addEdge(e1);
    v1.addEdge(e2);
    v2.addEdge(e3);
    v2.addEdge(e4);
    v3.addEdge(e5);
    v4.addEdge(e7);
    v4.addEdge(e8);
    v5.addEdge(e9);
    v4.addEdge(e10);
    v1.addEdge(e11);
    v4.addEdge(e12);
    v3.addEdge(e13);
    v5.addEdge(e14);
    v1.addEdge(e15);




    vertices["New York"] = v1;
    vertices["Los Angeles"] = v2;
    vertices["Chicago"] = v3;
    vertices["Houston"] = v4;
    vertices["Miami"] = v5;

    BFS("Los Angeles");
}
