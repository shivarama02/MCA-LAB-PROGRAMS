#include <stdio.h>

#define MAX 100

// Function prototypes
void dfs(int adj[MAX][MAX], int visited[MAX], int start, int n);
void printMatrix(int adj[MAX][MAX], int n);

int main() {
    int n, start;
    int adj[MAX][MAX] = {0}, visited[MAX] = {0};

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    printf("Enter the adjacency matrix:\n");
    for (int i = 0; i < n; i++) {
        printf("\n");
        for (int j = 0; j < n; j++) {
            printf("Enter adj[%d][%d]: ", i, j);
            scanf("%d", &adj[i][j]);
        }
    }

    printf("Adjacency Matrix:\n");
    printMatrix(adj, n);

    printf("Enter starting vertex: ");
    scanf("%d", &start);

    if (start < 0 || start >= n) {
        printf("Invalid starting vertex!!\n");
        return -1;
    }

    printf("DFS visited order: ");
    dfs(adj, visited, start, n);
    printf("\n");

    return 0;
}

void dfs(int adj[MAX][MAX], int visited[MAX], int start, int n) {
    visited[start] = 1;
    printf("%d ", start);

    for (int i = 0; i < n; i++) {
        if (adj[start][i] == 1 && !visited[i]) {
            dfs(adj, visited, i, n);
        }
    }
}

void printMatrix(int adj[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", adj[i][j]);
        }
        printf("\n");
    }
}
