#pragma once
#include <unordered_map>
#include <vector>
#include <list>
#include "Vertex.h"
#include "Edges.h"

using namespace std;

class Graph {
public:
    unordered_map<string, Vertex> vertices; // Stores vertices with city names as keys


    void addVertex(string newVertex);

    bool checkVertexExistByName(string name);


    void updateVertex(string oldName, string newName);


    void deleteVertex(string name);


    void addEdge(string sourceName, string destinationName, int weight);


    void updateEdge(string sourceName, string destinationName, int newWeight);


    void deleteEdge(string sourceName, string destinationName);


    bool checkIfNeighbors(string sourceName, string destinationName);


    vector<string> getAllNeighbors(string name);


    void printAllNeighbors(string name);


    void printGraph();
    void BFS(string name);
    void saveData(unordered_map<string, Vertex> vertices);
    unordered_map<string, Vertex> readData();
    void DFS(string current_city, string target_city);
    void dijkstra(const string startcity, const string endcity);
  

    void test();
};
