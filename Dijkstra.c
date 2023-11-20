#include <stdio.h>
#define V 6
#define MAX_INT 1000

struct Graph
{
    int vertices;
    int matrix[V][V];
};

void add_vertex(struct Graph* graph, 
    int source, 
    int destination,
    int weight)
{
    graph->matrix[source][destination] = weight;
    graph->matrix[destination][source] = weight;
}

void initialize_graph(
    struct Graph* graph, 
    int vertices)
{
    graph->vertices = vertices;
    for(int i=0; i<vertices; i++){
        for(int j=0; j<vertices; j++){
            graph->matrix[i][j] = 0;
        }
    }
}

int min_distance(int dist[], int visited[])
{
    int min = MAX_INT, min_index;
    for(int i=0; i<V; i++)
    {
        if(visited[i] == 0 && dist[i] < min)
        {
            min = dist[i];
            min_index = i;
        }
        
    }
    return min_index;
}


void print_dijkstra(int dist[])
{
    printf("Vertex   Distance from Source\n");
    for (int i = 0; i < V; i++) {
        printf("%d \t\t %d\n", i, dist[i]);
    }
}


void dijkstraAlgorithm(
    const struct Graph* graph, // DON'T CHANGE
    int source) // SOURCE == 0 BY DEFAULT
{
    int dist[V];
    int visited[V], i;

    // Initialize dist array
    for(i=0; i<V; i++){
        if(graph->matrix[source][i] == 0){
            dist[i] = MAX_INT;
        }
        else{
            dist[i] = graph->matrix[source][i];
        }
        visited[i] = 0;
        printf("dist[%d] : %d \n", i, dist[i]);
    }
    visited[source] = 1;
    dist[source] = 0;
    int count = 0;
    while(count < V - 1)
    {
        int u = min_distance(dist, visited);
        visited[u] = 1; 

        for(i = 0; i < V; i++)
        {
            if(!visited[i] && graph->matrix[u][i] < MAX_INT)
            {

                if(dist[u] + graph->matrix[u][i] < dist[i])
                {
                    dist[i] = dist[u] + graph->matrix[u][i];
                    printf("dist[i] %d \n", dist[i]);
                }
            } 
        }
        count++;
    }

    print_dijkstra(dist);
}

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
    
    dijkstra(&G, 0);
    return 0;
}