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

void Graph::test() {
    // Create vertices
    Vertex v1(1,"New York");
    Vertex v2(2,"Los Angeles");
    Vertex v3(3,"Chicago");
    Vertex v4(4,"Houston");
    Vertex v5(5,"Miami");

    // Add vertices to graph
    vertices["New York"] = v1;
    vertices["Los Angeles"] = v2;
    vertices["Chicago"] = v3;
    vertices["Houston"] = v4;
    vertices["Miami"] = v5;

    // Add edges
    addEdge("New York", "Los Angeles", 3945);
    addEdge("New York", "Chicago", 1143);
    addEdge("Los Angeles", "New York", 3945);
    addEdge("Los Angeles", "Houston", 2251);
    addEdge("Chicago", "New York", 1143);
    addEdge("Chicago", "Houston", 1084);
    addEdge("Houston", "Los Angeles", 2251);
    addEdge("Houston", "Miami", 1187);
    addEdge("Miami", "Houston", 1187);
}
