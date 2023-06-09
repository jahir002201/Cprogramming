// Breadth-first search (BFS)

#include <stdio.h>
#include <stdlib.h>

struct node {
    char vertex;
    struct node *next;
};

struct node *createNode(char v);
struct Graph {
    int numVertices;
    struct node **adjLists;
    int *visited;
};

// BFS algorithm
void bfs(struct Graph *graph, char startVertex) {
    struct node *adjList = graph->adjLists[startVertex - 97];
    struct node *temp = adjList;

    graph->visited[startVertex - 97] = 1;
    printf("Visited %c \n", startVertex);

    while (temp != NULL) {
        int connectedVertex = temp->vertex;

        if (graph->visited[connectedVertex - 97] == 0) {
            bfs(graph, connectedVertex);
        }
        temp = temp->next;
    }
}

// Create a node
struct node *createNode(char v) {
    struct node *newNode = malloc(sizeof(struct node));
    newNode->vertex = v;
    newNode->next = NULL;
    return newNode;
}

// Create graph
struct Graph *createGraph(int vertices) {
    struct Graph *graph = malloc(sizeof(struct Graph));
    graph->numVertices = vertices;

    graph->adjLists = malloc(vertices * sizeof(struct node *));
    graph->visited = malloc(vertices * sizeof(int));

    int i;
    for (i = 0; i < vertices; i++) {
        graph->adjLists[i] = NULL;
        graph->visited[i] = 0;
    }

    return graph;
}

// Add edge
void addEdge(struct Graph *graph, char src, char dest) {
    // Add edge from src to dest
    struct node *newNode = createNode(dest);
    newNode->next = graph->adjLists[src - 97];
    graph->adjLists[src - 97] = newNode;

    // Add edge from dest to src
    newNode = createNode(src);
    newNode->next = graph->adjLists[dest - 97];
    graph->adjLists[dest - 97] = newNode;
}

// Print the graph

void printGraph(struct Graph *graph) {
    int v;
    for (v = 0; v < graph->numVertices; v++) {
        struct node *temp = graph->adjLists[v];
        printf("\n Adjacency list of vertex %c\n ", v + 97);
        while (temp) {
            printf("%c -> ", temp->vertex);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of nodes in a graph : ");
    scanf("%d", &n);
    struct Graph *graph = createGraph(n);
    char a[n];
    printf("Enter the value of node of graph : \n");
    for (int i = 0; i < n; i++) {
        scanf(" %c", &a[i]);
    }
    printf("Enter the value in adjacency matrix in from of 'y' or 'n'\n");
    printf("If there exits an edge between two vertices than 'y' otherwise 'n'\n");
    for (int i = 0; i < n; i++) {
        printf("   ");
        for (int j = 0; j < n; j++) {
            printf("%c ", a[j]);
        }
        printf("\n");
        printf("%c  ", a[i]);
        for (int j = 0; j < n; j++) {
            char c;
            scanf(" %c", &c);
            if (c == 'y') {
                addEdge(graph, a[i], a[j]);
            }
        }
        printf("\n\n");
    }
    printf("BFS of Graph : ");
    bfs(graph, a[0]);
    printf("\n");
    return 0;
}