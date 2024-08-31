#include <iostream>
#include <list>

class Graph {
    int V;
    std::list<int>* adj;

public:
    Graph(int V);
    void addEdge(int v, int w);
    void DFS(int v);
};

Graph::Graph(int V) {
    this->V = V;
    adj = new std::list<int>[V];
}

void Graph::addEdge(int v, int w) {
    adj[v].push_back(w);
}

void Graph::DFS(int v) {
    bool* visited = new bool[V];
    for(int i = 0; i < V; i++)
        visited[i] = false;

    std::list<int> stack;

    stack.push_back(v);

    while(!stack.empty()) {
        v = stack.back();
        stack.pop_back();

        if (!visited[v]) {
            std::cout << v << " ";
            visited[v] = true;
        }

        for(auto i = adj[v].begin(); i != adj[v].end(); ++i)
            if (!visited[*i])
                stack.push_back(*i);
    }
    delete[] visited;
}

int main() {
    Graph g(4);

    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    std::cout << "Depth First Traversal (starting from vertex 2): ";
    g.DFS(2);

    return 0;
}
