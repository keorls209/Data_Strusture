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

    /**
     * Adds a new vertex to the graph
     * @param newVertex The vertex object to be added
     */
    void addVertex(Vertex newVertex);

    /**
     * Checks if a vertex exists in the graph by its name
     * @param name The city name to check
     * @return True if vertex exists, false otherwise
     */
    bool checkVertexExistByName(string name);

    /**
     * Updates the name of an existing vertex and all related edges
     * @param oldName Current city name
     * @param newName New city name
     */
    void updateVertex(string oldName, string newName);

    /**
     * Removes a vertex and all its connected edges from the graph
     * @param name City name of vertex to remove
     */
    void deleteVertex(string name);

    /**
     * Adds a directed edge between two vertices
     * @param sourceName Starting city name
     * @param destinationName Ending city name
     * @param weight Distance/weight of the connection
     */
    void addEdge(string sourceName, string destinationName, int weight);

    /**
     * Updates the weight of an existing edge
     * @param sourceName Starting city name
     * @param destinationName Ending city name
     * @param newWeight Updated distance/weight
     */
    void updateEdge(string sourceName, string destinationName, int newWeight);

    /**
     * Removes an edge between two vertices
     * @param sourceName Starting city name
     * @param destinationName Ending city name
     */
    void deleteEdge(string sourceName, string destinationName);

    /**
     * Checks if two vertices are directly connected (source to destination)
     * @param sourceName Starting city name
     * @param destinationName Ending city name
     * @return True if direct connection exists, false otherwise
     */
    bool checkIfNeighbors(string sourceName, string destinationName);

    /**
     * Gets all neighboring city names for a given vertex
     * @param name City name to check
     * @return Vector containing names of all neighboring cities
     */
    vector<string> getAllNeighbors(string name);

    /**
     * Prints all neighbors of a vertex to standard output
     * @param name City name whose neighbors to print
     */
    void printAllNeighbors(string name);

    /**
     * Prints the complete graph structure to standard output
     * Shows each city with its connections and distances
     */
    void printGraph();
    void BFS(string name);

    /**
     * Creates a test graph with sample US cities and connections
     * Contains predefined vertices and edges for demonstration
     */
    void test();
void BFS(string name);
};
