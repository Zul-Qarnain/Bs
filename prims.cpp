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
            if (g[u][v] && !inMST[v] && g[u][v] < key[v]) {
                parent[v] = u;
                key[v] = g[u][v];
            }
    }

    cout << "Edge\tWeight\n";
    for (int i = 1; i < n; i++)
        cout << parent[i] << " - " << i << "\t" << g[i][parent[i]] << "\n";
}

int main() {
    int n, g[MAX][MAX];
    cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            cin >> g[i][j];
            if (g[i][j] == 0 && i != j) g[i][j] = INF;
        }

    primMST(g, n);
    return 0;
}