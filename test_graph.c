#include <stdio.h>
int graph[100][100];

void initializeGraph(int nodes) {
    for (int i = 0; i < nodes; i++) {
        for (int j = 0; j < nodes; j++) {
            graph[i][j] = 0;
        }
    }
}

void addEdge(int from, int to) {
    graph[from][to] = 1;
}

void printGraph(int nodes) {
    printf("Adjacency Matrix:\n");
    for (int i = 0; i < nodes; i++) {
        for (int j = 0; j < nodes; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int nodes, edges;
    printf("Enter the number of nodes: ");
    scanf("%d", &nodes);

    initializeGraph(nodes);

    printf("Enter the number of edges: ");
    scanf("%d", &edges);

    for (int i = 0; i < edges; i++) {
        int from, to;
        printf("Enter edge %d (from to): ", i + 1);
        scanf("%d %d", &from, &to);

        if (from < 0 || from >= nodes || to < 0 || to >= nodes) {
            printf("Invalid input. Node index out of range.\n");
            i--;
            continue;
        }

        addEdge(from, to);
    }

    printGraph(nodes);

    return 0;
}
