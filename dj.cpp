#include <iostream>
using namespace std;

const int INF = 1000000;  // a big number
const int N = 10;         // max number of nodes

int n;                    // number of nodes
int graph[N][N];          // adjacency matrix
int dist[N];              // shortest distance
bool used[N];             // visited nodes

void dijkstra(int start) {
    // initialize distances
    for (int i = 0; i < n; i++) {
        dist[i] = INF;
        used[i] = false;
    }
    dist[start] = 0;

    for (int i = 0; i < n; i++) {
        int u = -1;
        int best = INF;

        // find unused node with smallest distance
        for (int j = 0; j < n; j++) {
            if (!used[j] && dist[j] < best) {
                best = dist[j];
                u = j;
            }
        }

        if (u == -1) break; // no node found
        used[u] = true;

        // update neighbors
        for (int v = 0; v < n; v++) {
            if (graph[u][v] > 0 && dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }
}

int main() {
    n = 5; // number of nodes

    // make all edges 0
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            graph[i][j] = 0;

    // add edges (undirected graph)
    graph[0][1] = 2; graph[1][0] = 2;
    graph[0][2] = 4; graph[2][0] = 4;
    graph[1][2] = 1; graph[2][1] = 1;
    graph[1][3] = 7; graph[3][1] = 7;
    graph[2][4] = 3; graph[4][2] = 3;

    dijkstra(0); // start at node 0

    cout << "Shortest distances from node 0:\n";
    for (int i = 0; i < n; i++) {
        cout << "To " << i << " = " << dist[i] << "\n";
    }

    return 0;
}