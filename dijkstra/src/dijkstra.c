#include "../include/utils.h"

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