/*
WAP to present a directive graph in matrix form
a) find commom vertices
b) How many vertices have more than 1 edge
*/
#include <stdio.h>

#define MAX_NODES 10

int graph[MAX_NODES][MAX_NODES];

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

void findCommonVertices(int nodes) {
    printf("Common Vertices: ");
    for (int i = 0; i < nodes; i++) {
        int isCommon = 1;
        for (int j = 0; j < nodes; j++) {
            if (i != j && graph[i][j] == 0 && graph[j][i] == 0) {
                isCommon = 0;
                break;
            }
        }
        if (isCommon) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int countVerticesWithMoreThanOneEdge(int nodes) {
    int count = 0;
    for (int i = 0; i < nodes; i++) {
        int edgeCount = 0;
        for (int j = 0; j < nodes; j++) {
            if (graph[i][j] == 1) {
                edgeCount++;
            }
        }
        if (edgeCount > 1) {
            count++;
        }
    }
    return count;
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

    findCommonVertices(nodes);
    int count = countVerticesWithMoreThanOneEdge(nodes);
    printf("Vertices with more than 1 edge: %d\n", count);

    return 0;
}
