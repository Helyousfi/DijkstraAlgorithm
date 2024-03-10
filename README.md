# Dijkstra's Shortest Path Algorithm
This project implements Dijkstra's shortest path algorithm in C and C++ for finding the shortest paths from a source vertex to all other vertices in a weighted graph. The code includes functions to create and initialize a graph, add vertices with weights, and perform Dijkstra's algorithm to find the shortest paths.

# Table of Contents
- Introduction
- Usage
- Functions
- Example

## Introduction
Dijkstra's algorithm is a widely used algorithm in graph theory for finding the shortest path between nodes in a graph with non-negative edge weights.
This project provides a simple C and C++ implementation of Dijkstra's algorithm.

## Usage
To use this project, include the provided C or C++ code in your project and call the necessary functions as demonstrated in the example below.

## Functions
- void initialize_graph(struct Graph* graph, int vertices): Initializes a graph with a specified number of vertices.

- void add_vertex(struct Graph* graph, int source, int destination, int weight): Adds a weighted edge between two vertices in the graph.

- void dijkstraAlgorithm(const struct Graph* graph, int source): Finds the shortest paths from a specified source vertex to all other vertices using Dijkstra's algorithm.

- void print_dijkstra(int dist[]): Prints the calculated distances from the source vertex to all other vertices.

## Example 
```C
#include <stdio.h>

// Include the Dijkstra's algorithm code here...

int main()
{
    struct Graph G;
    initialize_graph(&G, V);
    add_vertex(&G, 0, 1, 1);
    add_vertex(&G, 1, 3, 1);
    add_vertex(&G, 0, 2, 5);
    add_vertex(&G, 2, 3, 1);
    add_vertex(&G, 0, 4, 3);
    add_vertex(&G, 4, 5, 1);
    add_vertex(&G, 2, 5, 2);

    dijkstraAlgorithm(&G, 0);
    
    return 0;
}
```
