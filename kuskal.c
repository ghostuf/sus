#include <stdio.h>
#include <limits.h>

#define MAX 9

int find(int parent[], int i);
int unionSets(int parent[], int rank[], int u, int v);

int main() {
    int i, j, a, b, u, v, n, ne = 1;
    int min, mincost = 0;
    int cost[MAX][MAX], parent[MAX], rank[MAX];

    printf("\n\tImplementation of Kruskal's Algorithm\n");
    printf("\nEnter the number of vertices: ");
    scanf("%d", &n);

    printf("\nEnter the adjacency matrix:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            scanf("%d", &cost[i][j]);
            if (cost[i][j] == 0)
                cost[i][j] = INT_MAX;
        }
    }

    for (i = 1; i <= n; i++) {
        parent[i] = 0;
        rank[i] = 0;
    }

    printf("The edges of Minimum Cost Spanning Tree are:\n");
    while (ne < n) {
        for (i = 1, min = INT_MAX; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                if (cost[i][j] < min) {
                    min = cost[i][j];
                    a = u = i;
                    b = v = j;
                }
            }
        }

        u = find(parent, u);
        v = find(parent, v);

        if (unionSets(parent, rank, u, v)) {
            printf("%d edge (%d,%d) = %d\n", ne++, a, b, min);
            mincost += min;
        }

        cost[a][b] = cost[b][a] = INT_MAX;
    }

    printf("\n\tMinimum cost = %d\n", mincost);

    printf("This code is run by Arun Mainali.\n");

    return 0;
}

int find(int parent[], int i) {
    if (parent[i] == 0)
        return i;
    else
        return parent[i] = find(parent, parent[i]);
}

int unionSets(int parent[], int rank[], int u, int v) {
    if (u != v) {
        if (rank[u] > rank[v])
            parent[v] = u;
        else if (rank[u] < rank[v])
            parent[u] = v;
        else {
            parent[v] = u;
            rank[u]++;
        }
        return 1;
    }


    return 0;
}
