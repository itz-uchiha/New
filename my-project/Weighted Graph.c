// Weighted directed graph representation


#include <stdio.h>
#define INF 999999  // Representation of no edge

int main() {
    int n, e;
    printf("Name: Siddhant Shrestha Roll No: 40\n");
    printf("Enter number of vertices: ");
    scanf("%d", &n);

    int graph[n][n];

    // Initialize matrix with INF (no edge)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j)
                graph[i][j] = 0;
            else
                graph[i][j] = INF;
        }    }
    printf("Enter number of edges: ");
    scanf("%d", &e);

    printf("Enter edges in format (u v w) where u -> v with weight w:\n");
    for (int i = 0; i < e; i++) {
        int u, v, w;
        scanf("%d %d %d", &u, &v, &w);
        graph[u][v] = w; // Directed edge
    }
    printf("\nAdjacency Matrix (INF = No edge):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (graph[i][j] == INF)
                printf("INF\t");
            else
                printf("%d\t", graph[i][j]);
        }         printf("\n");
    }
    return 0;
}

