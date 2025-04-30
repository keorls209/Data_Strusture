#pragma once
#include <unordered_map>
#include <vector>
#include "Vertex.h"
#include "Edges.h"

using namespace std;

class Graph {
public:
    unordered_map<int, Vertex> vertices; // Stores all vertices with their ID as key


    // Adds a new vertex to the graph
    // Parameters: newVertex - the vertex object to be added
    void addVertex(Vertex newVertex);

    // Checks if a vertex exists in the graph by its ID
    // Parameters: id - the vertex ID to check
    // Returns: true if vertex exists, false otherwise
    bool checkVertexExistByID(int id);

    // Updates the name of an existing vertex
    // Parameters: id - vertex ID to update, name - new name for the vertex
    void updateVertex(int id, string name);

    // Removes a vertex and all its connected edges from the graph
    // Parameters: id - ID of vertex to remove
    void deleteVertex(int id);

    // Adds an undirected edge between two vertices
    // Parameters: sourceID - first vertex ID, destinationID - second vertex ID, weight - edge weight
    void addEdge(int sourceID, int destinationID, int weight);

    // Updates the weight of an existing edge
    // Parameters: sourceID - first vertex ID, destinationID - second vertex ID, newWeight - updated weight
    void updateEdge(int sourceID, int destinationID, int newWeight);

    // Removes an edge between two vertices
    // Parameters: sourceID - first vertex ID, destinationID - second vertex ID
    void deleteEdge(int sourceID, int destinationID);

    // Checks if two vertices are directly connected (neighbors)
    // Parameters: sourceID - first vertex ID, destinationID - second vertex ID
    // Returns: true if vertices are neighbors, false otherwise
    bool checkIfNeighbors(int sourceID, int destinationID);

    // Gets all neighboring vertex IDs for a given vertex
    // Parameters: id - vertex ID to check
    // Returns: vector containing IDs of all neighboring vertices
    vector<int> getAllNeighbors(int id);

    // Prints all neighbors of a vertex to standard output
    // Parameters: id - vertex ID whose neighbors to print
    void printAllNeighbors(int id);

    // Prints the complete graph structure to standard output
    void printGraph();
	// Test function to demonstrate graph functionality
    void test();
};