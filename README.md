# Dijkstra's Shortest Path Algorithm
This project implements Dijkstra's shortest path algorithm in C for finding the shortest paths from a source vertex to all other vertices in a weighted graph. The code includes functions to create and initialize a graph, add vertices with weights, and perform Dijkstra's algorithm to find the shortest paths.

# Table of Contents
- Introduction
- Usage
- Functions

## Introduction
Dijkstra's algorithm is a widely used algorithm in graph theory for finding the shortest path between nodes in a graph with non-negative edge weights. This project provides a simple C implementation of Dijkstra's algorithm.

## Usage
To use this project, include the provided C code in your project and call the necessary functions as demonstrated in the example below.

## Functions
- void initialize_graph(struct Graph* graph, int vertices): Initializes a graph with a specified number of vertices.

- void add_vertex(struct Graph* graph, int source, int destination, int weight): Adds a weighted edge between two vertices in the graph.

- void dijkstraAlgorithm(const struct Graph* graph, int source): Finds the shortest paths from a specified source vertex to all other vertices using Dijkstra's algorithm.

- void print_dijkstra(int dist[]): Prints the calculated distances from the source vertex to all other vertices.