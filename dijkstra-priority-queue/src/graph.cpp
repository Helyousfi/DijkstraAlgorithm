#include "../include/graph.hpp"

Graph::Graph(int V) // allocate the vertex memory
{
    this->V = V; // assign the vertex
    adj = new std::list<iPair>[V]; // allocate space for vertices
}

void Graph::addEdge(int u, int v, int w) // add an edge
{
    adj[u].push_back(std::make_pair(v, w)); // make a pair of vertex and weight and // add it to the list
    adj[v].push_back(std::make_pair(u, w)); // add oppositely by making a pair of weight and vertex
}

// Calling function outside the Graph class
void Graph::shortestPathingraph(int src) // src is the source vertex
{
    // Create a priority queue to store vertices that
    // are being preprocessed.
    std::priority_queue<iPair, std::vector<iPair>, std::greater<iPair>> pq;
    std::vector<int> dist(V, INF);   // All distance from source are infinite
    pq.push(std::make_pair(0, src)); // push spurce node into the queue
    dist[src] = 0;              // distance of source will be always 0
    while (!pq.empty())
    { // While queue is not empty
        // Extract the first minimum distance from the priority queue
        // vertex label is stored in second of pair (it
        // has to be done this way to keep the vertices
        // sorted distance
        int u = pq.top().second;
        pq.pop();
        // 'i' is used to get all adjacent vertices of a vertex
        std::list<std::pair<int, int>>::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i)
        {
            // Get vertex label and weight of current adjacent
            // of u.
            int v = (*i).first;
            int weight = (*i).second;

            // If there is shorted path to v through u.
            if (dist[v] > dist[u] + weight)
            {
                // Updating distance of v
                dist[v] = dist[u] + weight;
                pq.push(std::make_pair(dist[v], v));
            }
        }
    }
    std::cout<< "Vertex \tDistance from Source\n"; // Print the result
    for (int i = 0; i < V; ++i)
        std::cout << i << "\t\t" << dist[i] << std::endl; // The shortest distance from source
}