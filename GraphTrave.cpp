#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Graph {
private:
    int V;
    vector<vector<int>> adj;

public:
    Graph(int vertices) {
        V = vertices;
        adj.resize(V);
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u); // for undirected graph
    }

    void bfs(int start) {
        vector<bool> visited(V, false);
        queue<int> q;
        q.push(start);
        visited[start] = true;

        while (!q.empty()) {
            int node = q.front();
            q.pop();
            cout << node << " ";

            for (int neighbor : adj[node]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
        cout << endl;
    }

    void dfsUtil(int node, vector<bool>& visited) {
        visited[node] = true;
        cout << node << " ";
        for (int neighbor : adj[node]) {
            if (!visited[neighbor])
                dfsUtil(neighbor, visited);
        }
    }

    void dfs(int start) {
        vector<bool> visited(V, false);
        dfsUtil(start, visited);
        cout << endl;
    }
};

int main() {
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);

    cout << "BFS: ";
    g.bfs(0);

    cout << "DFS: ";
    g.dfs(0);

    return 0;
}
