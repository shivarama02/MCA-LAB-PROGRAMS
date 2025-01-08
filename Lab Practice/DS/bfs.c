#include <stdio.h>

#define MAX 100

// Queue structure
int queue[MAX];
int front = -1, rear = -1;

// Function prototypes
int dequeue();
void enqueue(int);
int isQueueEmpty();
void bfs(int adj[MAX][MAX], int visited[MAX], int start, int n);

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
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", adj[i][j]);
        }
        printf("\n");
    }

    printf("Enter starting vertex: ");
    scanf("%d", &start);

    if (start < 0 || start >= n) {
        printf("Invalid starting vertex!!\n");
        return -1;
    }

    printf("BFS visited order: ");
    bfs(adj, visited, start, n);

    return 0;
}

void bfs(int adj[MAX][MAX], int visited[MAX], int start, int n) {
    enqueue(start);
    visited[start] = 1;

    while (!isQueueEmpty()) {
        int node = dequeue();
        printf("%d ", node);

        for (int i = 0; i < n; i++) {
            if (adj[node][i] == 1 && !visited[i]) {
                enqueue(i);
                visited[i] = 1;
            }
        }
    }
}

int dequeue() {
    if (isQueueEmpty()) {
        printf("Queue Underflow\n");
        return -1;
    }
    int node = queue[front];
    if (front == rear) {
        front = -1;
        rear = -1;
    } else {
        front++;
    }
    return node;
}

void enqueue(int value) {
    if (rear == MAX - 1) {
        printf("Queue Overflow\n");
        return;
    }
    if (front == -1) front = 0;
    queue[++rear] = value;
}

int isQueueEmpty() {
    return front == -1;
}
