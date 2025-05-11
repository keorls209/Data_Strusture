#include "Graph.h"
#include <queue>
#include <unordered_map>
#include <fstream>
#include <string>
#include <limits>
#include <stack>
#include <iterator>
#include <list>
#include <iostream>
using namespace std;
const int INF = numeric_limits<int>::max();
void Graph::addVertex(string newVertex) {
    if (checkVertexExistByName(newVertex)) {
        cout << "this vertex is found" << endl;
    }
    else {
        Vertex v(newVertex);
        vertices[newVertex] = v;
    }
}

bool Graph::checkVertexExistByName(string name) {
    return vertices.find(name) != vertices.end();
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
unordered_map<string, Vertex> Graph::readData() {
    unordered_map<string, Vertex> ver;
    fstream data;
    data.open("vertex.txt", ios::in);
    string name;
    string source;
    string na;
    string w;
    while (getline(data, source)) {
        Vertex v(source);
        getline(data, na);
        int i = 0;
        name = "";
        while (na.length() != 0) {
            i = 0;
            name = "";
            w = "";
            while (na[i] != '-') {
                name += na[i];
                i++;
            }
            i++;
            na.erase(0, i + 1);
            i = 0;
            int pos = na.find(' ');
            while (i != pos) {
                w += na[i];
                i++;
            }
            Edges e(source, name, stoi(w));
            v.addEdge(e);
            na.erase(0, i + 1);
        }
        name = "";
        w = "";
        ver[source] = v;
    }
    return ver;
}
void Graph::BFS(string name)
{
    list <Edges> tmpedge = vertices[name].edgeList;
    unordered_map<string, bool> visiting_state;
    for (auto& pair : vertices) {
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
    cout << endl;
}

void Graph::updateVertex(string oldName, string newName) {
    // Check if old name exists and new name doesn't exist
    if (!checkVertexExistByName(oldName)) {
        cout << "City " << oldName << " doesn't exist!" << endl;
        return;
    }
    if (checkVertexExistByName(newName)) {
        cout << "City " << newName << " already exists!" << endl;
        return;
    }

    // Create a copy of the vertex with new name
    Vertex updatedVertex = vertices[oldName];
    updatedVertex.setStateName(newName);

    // Clear the edge list and update all edges with new name
    list<Edges> oldEdges = updatedVertex.getEdges();
    updatedVertex.edgeList.clear();

    for (Edges edge : oldEdges) {
        Edges updatedEdge(newName, edge.getVertexName2(), edge.getWeight());
        updatedVertex.addEdge(updatedEdge);
    }

    // Add vertex with new name
    vertices[newName] = updatedVertex;

    // Update all edges in other vertices that point to this vertex
    for (auto& pair : vertices) {
        if (pair.first != newName && pair.first != oldName) {
            list<Edges>& edges = pair.second.edgeList;
            list<Edges> updatedEdges;

            for (Edges& edge : edges) {
                if (edge.getVertexName2() == oldName) {
                    Edges updatedEdge(pair.first, newName, edge.getWeight());
                    updatedEdges.push_back(updatedEdge);
                }
                else {
                    updatedEdges.push_back(edge);
                }
            }

            pair.second.edgeList = updatedEdges;
        }
    }

    // Remove the old vertex
    vertices.erase(oldName);
    cout << "City updated from " << oldName << " to " << newName << " successfully!" << endl;
}

// Implementation for deleteVertex function
void Graph::deleteVertex(string name) {
    if (!checkVertexExistByName(name)) {
        cout << "City " << name << " doesn't exist!" << endl;
        return;
    }

    // Remove the vertex from the vertices map
    vertices.erase(name);

    // Remove all edges pointing to this vertex from other vertices
    for (auto& pair : vertices) {
        list<Edges>& edges = pair.second.edgeList;
        edges.remove_if([name](Edges& edge) {
            return edge.getVertexName2() == name;
            });
    }

    cout << "City " << name << " and all its connections deleted successfully!" << endl;
}

bool Graph::checkIfNeighbors(string sourceName, string destinationName) {
    if (!checkVertexExistByName(sourceName) || !checkVertexExistByName(destinationName)) {
        return false;
    }

    for (Edges& edge : vertices[sourceName].edgeList) {
        if (edge.getVertexName2() == destinationName) {
            return true;
        }
    }

    return false;
}

vector<string> Graph::getAllNeighbors(string name) {
    vector<string> neighbors;

    if (!checkVertexExistByName(name)) {
        return neighbors;
    }

    for (Edges& edge : vertices[name].edgeList) {
        neighbors.push_back(edge.getVertexName2());
    }

    return neighbors;
}

void Graph::printAllNeighbors(string name) {
    if (!checkVertexExistByName(name)) {
        cout << "City " << name << " doesn't exist!" << endl;
        return;
    }

    vector<string> neighbors = getAllNeighbors(name);

    if (neighbors.empty()) {
        cout << "City " << name << " has no connections." << endl;
        return;
    }

    cout << "Connections from " << name << ":" << endl;
    for (Edges& edge : vertices[name].edgeList) {
        cout << "  -> " << edge.getVertexName2() << " (Distance: " << edge.getWeight() << "km)" << endl;
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

void Graph::DFS(string current_city, string target_city)
{
    unordered_map<string, bool> visited;
    unordered_map<string, string> saveway;
    stack<string> city;

    for (const auto& pair : vertices) {
        visited[pair.first] = false;
    }

    city.push(current_city);
    saveway[current_city] = "";

    bool found = false;

    while (!city.empty())
    {

        string current = city.top();
        city.pop();

        if (current == target_city)
        {
            found = true;
            break;
        }

        if (!visited[current])
        {
            visited[current] = true;


            auto& Edges = vertices[current].edgeList;
            for (const auto& edge : Edges)
            {
                string branch = edge.vertexName2;
                if (!visited[branch]) {
                    city.push(branch);
                    saveway[branch] = current;

                }

            }

        }

    }
    if (found) {
        vector<string> path;
        for (string at = target_city; at != ""; at = saveway[at]) {
            path.push_back(at);
        }
        reverse(path.begin(), path.end());

        cout << "Path from " << current_city << " to  " << target_city << ": " << endl;
        for (const string& city : path) {
            cout << city;
            if (city != target_city) cout << " -> ";
        }
        cout << endl;
    }
    else {
        cout << "No path found from  " << current_city << "  to " << target_city << "." << endl;
    }
}



void Graph::dijkstra(const string startcity, const string endcity)
{
    if (checkVertexExistByName(startcity) == false || checkVertexExistByName(endcity) == false) {
        return;
    }
    vector<int> dist(vertices.size(), INF);
    vector <int> parent(vertices.size(), -1);
    priority_queue <pair<int, int>, vector <pair<int, int> >, greater<pair<int, int>>> pq;

    unordered_map<string, int> city_index;
    unordered_map<int, string> reversed_city_index;
    int c = 0;
    for (const auto& pair : vertices) {
        string name = pair.first;
        city_index.insert({ name, c });
        reversed_city_index.insert({ c, name });
        c++;
    }
    int start = city_index[startcity];
    int end = city_index[endcity];
    dist[start] = 0;
    pq.push({ 0, start });
    while (!pq.empty()) {
        int u = pq.top().second;
        int currDist = pq.top().first;
        pq.pop();

        if (currDist < dist[u]) {
            continue;
        }
        if (u == end) {
            break;
        }

        for (auto& edge : vertices[reversed_city_index[u]].edgeList)
        {
            string name = edge.getVertexName2();
            int v = city_index[name];   //neighbor
            int weight = edge.getWeight();    //edge weight
            if ((dist[u] + weight) < dist[v]) {
                dist[v] = dist[u] + weight;
                parent[v] = u;
                pq.push({ dist[v], v });
            }
        }
    }

    if (dist[end] == INF) {
        cout << "there is no path between" << startcity << "and" << endcity << endl;
        return;
    }

    //reconstruct path
    stack<int> pathStack;
    int currcity = end;
    while (currcity != -1) {
        pathStack.push(currcity);
        currcity = parent[currcity];
    }
    cout << "Shortest path between" << startcity << "and" << endcity << "is:" << dist[end] << endl;

    while (!pathStack.empty()) {
        cout << reversed_city_index[pathStack.top()] << " ";
        pathStack.pop();
        if (!pathStack.empty()) cout << "--->";
    }
}


//================================


void Graph::addEdge(string sourceName, string destinationName, int weight) {
    if (!checkVertexExistByName(sourceName) || !checkVertexExistByName(destinationName)) {
        cout << "one or both cities are not in the graph" << endl;
        return;
    }

    Edges e1(sourceName, destinationName, weight);
        vertices[sourceName].addEdge(e1);
        cout << "edge has been added succesfully from" << sourceName << "to" << destinationName << "and its lenght is" << weight << "km" << endl;
}

void Graph::updateEdge(string sourceName, string destinationName, int newWeight) {
    list<Edges>::iterator it;
    for (it = vertices[sourceName].edgeList.begin(); it != vertices[sourceName].edgeList.end(); it++) {
        cout << it->vertexName1 << "  " << it->vertexName2 << "  from fun" << endl;
        if (it->vertexName1 == sourceName && it->vertexName2 == destinationName) {
            it->Weight = newWeight;
        }
        cout << it->Weight << "  from fun" << endl;
    }
    Vertex v2 = vertices[sourceName];
    while (!v2.edgeList.empty()) {
        cout << v2.edgeList.front().Weight << "  from while" << endl;
        v2.edgeList.pop_front();
    }
}


void Graph::deleteEdge(string sourceName, string destinationName) {
    list<Edges>::iterator it;
    for (it = vertices[sourceName].edgeList.begin(); it != vertices[sourceName].edgeList.end(); it++) {
        if (it->vertexName1 == sourceName && it->vertexName2 == destinationName) {
            vertices[sourceName].edgeList.erase(it);
            cout << "edge deleted successfully" << endl;
            break;
        }
        else
        {
            cout << "this edge is not found" << endl;
        }
    }

}
















void Graph::test()
{

    //just for testing
    Vertex v1("New York");
    Vertex v2("Los Angeles");
    Vertex v3("Chicago");
    Vertex v4("Houston");
    Vertex v5("Miami");


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


    updateEdge("Miami", "Houston", 1200);
    list<Edges>::iterator it;
    for (it = v5.edgeList.begin(); it != v5.edgeList.end(); it++) {
        cout << it->getVertexName2() << "  " << it->Weight << endl;
    }
    

    //BFS("Los Angeles");
}   
