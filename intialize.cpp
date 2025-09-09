#include <iostream>
using namespace std;

#define MAX 100
#define INF 99999

void primMST(int g[MAX][MAX], int n) {
    int parent[MAX], key[MAX];
    bool inMST[MAX];

    for (int i = 0; i < n; i++) {
        key[i] = INF;
        inMST[i] = false;
    }

    key[0] = 0;
    parent[0] = -1;

    for (int count = 0; count < n - 1; count++) {
        int u = -1;
        for (int v = 0; v < n; v++)
            if (!inMST[v] && (u == -1 || key[v] < key[u])) u = v;

        inMST[u] = true;

        for (int v = 0; v < n; v++)
            if (g[u][v] && g[u][v] != INF && !inMST[v] && g[u][v] < key[v]) {
                parent[v] = u;
                key[v] = g[u][v];
            }
    }

    cout << "Edge\tWeight\n";
    for (int i = 1; i < n; i++)
        cout << parent[i] << " - " << i << "\t" << g[i][parent[i]] << "\n";
}

int main() {
    // Example graph (5 vertices)
    int n = 5;
    int g[MAX][MAX] = {
        {0, 2, 0, 6, 0},
        {2, 0, 3, 8, 5},
        {0, 3, 0, 0, 7},
        {6, 8, 0, 0, 9},
        {0, 5, 7, 9, 0}
    };

    // Replace 0 with INF (except diagonal)
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (g[i][j] == 0 && i != j) g[i][j] = INF;

    primMST(g, n);
    return 0;
}