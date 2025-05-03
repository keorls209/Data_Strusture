// Implementation for updateVertex function
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
            
            for (const Edges& edge : edges) {
                if (edge.getVertexName2() == oldName) {
                    Edges updatedEdge(pair.first, newName, edge.getWeight());
                    updatedEdges.push_back(updatedEdge);
                } else {
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
        edges.remove_if([name](const Edges& edge) {
            return edge.getVertexName2() == name;
        });
    }
    
    cout << "City " << name << " and all its connections deleted successfully!" << endl;
}

// Implementation for addEdge function
void Graph::addEdge(string sourceName, string destinationName, int weight) {
    if (!checkVertexExistByName(sourceName)) {
        cout << "Source city " << sourceName << " doesn't exist!" << endl;
        return;
    }
    if (!checkVertexExistByName(destinationName)) {
        cout << "Destination city " << destinationName << " doesn't exist!" << endl;
        return;
    }
    
    // Check if edge already exists
    for (const Edges& edge : vertices[sourceName].edgeList) {
        if (edge.getVertexName2() == destinationName) {
            cout << "Edge from " << sourceName << " to " << destinationName << " already exists!" << endl;
            return;
        }
    }
    
    // Create and add the new edge
    Edges newEdge(sourceName, destinationName, weight);
    vertices[sourceName].addEdge(newEdge);
    
    cout << "Edge added from " << sourceName << " to " << destinationName << " with distance " << weight << "km" << endl;
}

// Implementation for updateEdge function
void Graph::updateEdge(string sourceName, string destinationName, int newWeight) {
    if (!checkVertexExistByName(sourceName)) {
        cout << "Source city " << sourceName << " doesn't exist!" << endl;
        return;
    }
    if (!checkVertexExistByName(destinationName)) {
        cout << "Destination city " << destinationName << " doesn't exist!" << endl;
        return;
    }
    
    // Find and update the edge
    bool found = false;
    for (Edges& edge : vertices[sourceName].edgeList) {
        if (edge.getVertexName2() == destinationName) {
            edge.setWeight(newWeight);
            found = true;
            break;
        }
    }
    
    if (found) {
        cout << "Edge from " << sourceName << " to " << destinationName << " updated with new distance: " << newWeight << "km" << endl;
    } else {
        cout << "Edge from " << sourceName << " to " << destinationName << " doesn't exist!" << endl;
    }
}

// Implementation for deleteEdge function
void Graph::deleteEdge(string sourceName, string destinationName) {
    if (!checkVertexExistByName(sourceName)) {
        cout << "Source city " << sourceName << " doesn't exist!" << endl;
        return;
    }
    if (!checkVertexExistByName(destinationName)) {
        cout << "Destination city " << destinationName << " doesn't exist!" << endl;
        return;
    }
    
    // Find the edge to delete
    list<Edges>& edges = vertices[sourceName].edgeList;
    size_t initialSize = edges.size();
    
    edges.remove_if([destinationName](const Edges& edge) {
        return edge.getVertexName2() == destinationName;
    });
    
    if (edges.size() < initialSize) {
        cout << "Edge from " << sourceName << " to " << destinationName << " deleted successfully!" << endl;
    } else {
        cout << "Edge from " << sourceName << " to " << destinationName << " doesn't exist!" << endl;
    }
}

// Implementation for checkIfNeighbors function
bool Graph::checkIfNeighbors(string sourceName, string destinationName) {
    if (!checkVertexExistByName(sourceName) || !checkVertexExistByName(destinationName)) {
        return false;
    }
    
    for (const Edges& edge : vertices[sourceName].edgeList) {
        if (edge.getVertexName2() == destinationName) {
            return true;
        }
    }
    
    return false;
}

// Implementation for getAllNeighbors function
vector<string> Graph::getAllNeighbors(string name) {
    vector<string> neighbors;
    
    if (!checkVertexExistByName(name)) {
        return neighbors;
    }
    
    for (const Edges& edge : vertices[name].edgeList) {
        neighbors.push_back(edge.getVertexName2());
    }
    
    return neighbors;
}

// Implementation for printAllNeighbors function
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
    for (const Edges& edge : vertices[name].edgeList) {
        cout << "  -> " << edge.getVertexName2() << " (Distance: " << edge.getWeight() << "km)" << endl;
    }
}
