#include <iostream>
#include <vector>
using namespace std;

// Simple Graph using Adjacency List
class Graph {
private:
    int V;  // number of vertices
    vector<vector<int>> adj;  // adjacency list

public:
    // Constructor
    Graph(int vertices) {
        V = vertices;
        adj.resize(V);  // Resize the list based on number of vertices
    }

    // Add edge between two nodes (undirected)
    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);  // Since the graph is undirected
    }

    // Print all neighbors of each vertex
    void printGraph() {
        for (int i = 0; i < V; i++) {
            cout << i << ": ";
            for (int neighbor : adj[i]) {
                cout << neighbor << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Graph g(5); // create a graph with 5 vertices

    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    cout << "Graph adjacency list:" << endl;
    g.printGraph();

    return 0;
}
