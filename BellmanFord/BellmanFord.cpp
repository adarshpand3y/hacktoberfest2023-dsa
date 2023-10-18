#include <iostream>
#include <vector>
#include <climits>

using namespace std;

struct Edge {
    int source, destination, weight;
};

class Graph {
    int V, E;
    vector<Edge> edges;

public:
    Graph(int vertices, int edgesCount) : V(vertices), E(edgesCount) {
        edges.resize(E);
    }

    void addEdge(int source, int destination, int weight) {
        edges.push_back({source, destination, weight});
    }

    void bellmanFord(int source) {
        vector<int> distance(V, INT_MAX);
        distance[source] = 0;

        for (int i = 0; i < V - 1; ++i) {
            for (int j = 0; j < E; ++j) {
                int u = edges[j].source;
                int v = edges[j].destination;
                int w = edges[j].weight;

                if (distance[u] != INT_MAX && distance[u] + w < distance[v]) {
                    distance[v] = distance[u] + w;
                }
            }
        }

        // Check for negative weight cycles
        for (int i = 0; i < E; ++i) {
            int u = edges[i].source;
            int v = edges[i].destination;
            int w = edges[i].weight;

            if (distance[u] != INT_MAX && distance[u] + w < distance[v]) {
                cout << "Graph contains negative weight cycle" << endl;
                return;
            }
        }

        // Print the shortest distances
        for (int i = 0; i < V; ++i) {
            cout << "Vertex " << i << ": Distance = " << distance[i] << endl;
        }
    }
};

int main() {
    int V, E;
    cout << "Enter the number of vertices and edges: ";
    cin >> V >> E;

    Graph graph(V, E);

    for (int i = 0; i < E; ++i) {
        int source, destination, weight;
        cout << "Enter edge " << i + 1 << " source, destination, and weight: ";
        cin >> source >> destination >> weight;
        graph.addEdge(source, destination, weight);
    }

    int sourceVertex;
    cout << "Enter the source vertex: ";
    cin >> sourceVertex;

    graph.bellmanFord(sourceVertex);

    return 0;
}
