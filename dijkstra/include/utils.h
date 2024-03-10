#include <stdio.h>
#include "params.h"

struct Graph
{
    int vertices;
    int matrix[V][V];
};

void add_vertex(struct Graph* graph, int source, int destination, int weight);

void initialize_graph(struct Graph* graph, int vertices);

int min_distance(int dist[], int visited[]);


void print_dijkstra(int dist[]);


void dijkstraAlgorithm(const struct Graph* graph, int source);