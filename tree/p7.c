#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int graph[MAX][MAX];
int visited[MAX];
int queue[MAX];
int front = -1, rear = -1;
int n;
void addEdge(int u, int v) {
    graph[u][v] = 1;
}
void BFS(int start) {
    for (int i = 0; i < n; i++)
        visited[i] = 0;

    front = rear = -1;
    queue[++rear] = start;
    visited[start] = 1;

    printf("BFS: ");
    while (front != rear) {
        int current = queue[++front];
        printf("%d ", current);

        for (int i = 0; i < n; i++) {
            if (graph[current][i] == 1 && !visited[i]) {
                queue[++rear] = i;
                visited[i] = 1;
            }
        }
    }
    printf("\n");
}
void DFS(int start) {
    visited[start] = 1;
    printf("%d ", start);
    for (int i = 0; i < n; i++) {
        if (graph[start][i] == 1 && !visited[i])
            DFS(i);
    }
}
int inDegree(int v) {
    int deg = 0;
    for (int i = 0; i < n; i++) {
        if (graph[i][v] == 1)
            deg++;
    }
    return deg;
}
int outDegree(int v) {
    int deg = 0;
    for (int i = 0; i < n; i++) {
        if (graph[v][i] == 1)
            deg++;
    }
    return deg;
}
int main() {
    int edges, u, v, start;
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    printf("Enter number of edges: ");
    scanf("%d", &edges);
    printf("Enter edges (u v):\n");
    for (int i = 0; i < edges; i++) {
        scanf("%d %d", &u, &v);
        addEdge(u, v);
    }
    printf("Enter starting node for BFS and DFS: ");
    scanf("%d", &start);
    BFS(start);
    for (int i = 0; i < n; i++) visited[i] = 0;
    printf("DFS: ");
    DFS(start);
    printf("\n");
    printf("\nIn-degrees and Out-degrees:\n");
    for (int i = 0; i < n; i++) {
        printf("Node %d: In-degree = %d, Out-degree = %d\n", i, inDegree(i), outDegree(i));
    }
    return 0;
}
