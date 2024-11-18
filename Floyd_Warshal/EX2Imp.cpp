#include <iostream>
#include <climits>
#define MAXN 100
#define INF 1e7

using namespace std;

int dist[MAXN][MAXN];    // Distance matrix
int Next[MAXN][MAXN];    // Next vertex on the shortest path

// Function to initialize the distance and next matrices
void initialise(int V, int graph[MAXN][MAXN]) {
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (graph[i][j] == 0 && i != j) {
                dist[i][j] = INF;  // No direct edge
                Next[i][j] = -1;   // No next vertex
            } else {
                dist[i][j] = graph[i][j]; // Direct edge weight
                Next[i][j] = j;           // Next vertex is destination
            }
        }
    }
}

// Function to perform the Floyd-Warshall algorithm
void floydWarshall(int V) {
    for (int k = 0; k < V; k++) {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (dist[i][k] < INF && dist[k][j] < INF &&
                    dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                    Next[i][j] = Next[i][k];
                }
            }
        }
    }
}

// Function to print the shortest path
void printPath(int path[], int n) {
    for (int i = 0; i < n; i++) {
        cout << path[i];
        if (i != n - 1) {
            cout << " -> ";
        }
    }
    cout << endl;
}

int main() {
    int V;
    cin >> V;

    int graph[MAXN][MAXN];
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            cin >> graph[i][j];
        }
    }

    initialise(V, graph);
    floydWarshall(V);

    int u, v;
    cin >> u >> v;

    if (dist[u][v] >= INF) {
        cout << "No path exists from " << u << " to " << v << endl;
        return 0;
    }

    int path[MAXN];
    path[0] = u;
    int index = 1;
    while (u != v) {
        u = Next[u][v];
        if (u == -1) {
            cout << "No path exists" << endl;
            return 0;
        }
        path[index++] = u;
    }

    cout << "Shortest path from " << path[0] << " to " << path[index - 1] << ": ";
    printPath(path, index);

    return 0;
}

