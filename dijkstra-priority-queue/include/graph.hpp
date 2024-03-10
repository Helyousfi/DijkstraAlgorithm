#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <bits/stdc++.h>
#include "params.hpp"

typedef std::pair<int, int> iPair;

class Graph {
    private:
    int V;                     // No. of vertices in the graph
    std::list<std::pair<int, int>> *adj; // the list of pair to store vertex and its weight
    public:
    Graph(int V);
    void addEdge(int u, int v, int w);
    void shortestPathingraph(int src);

};

#endif