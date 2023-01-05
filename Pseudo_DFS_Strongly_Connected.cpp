// Using DFS algorithm to find whether the graph is strongly connected or not
// Input: Graph G=(V,E)
// Output: True if G is strongly connected, False otherwise

void Strong_Connected(Graph G<V,E>)
{
    B1: Init();
    // Create visited bool and mark all vertices as not visited
    memset(visited, false, sizeof(visited));
    B2: 
        for each u in V
            if(!visited[u])
                DFS(u, visited, adj);
                for (int i = 0; i < V; i++)
                    if (!visited[i])
                    {
                        cout << "Graph is not strongly connected";
                        return;
                    }
            endif
        endfor
    B3:
        cout << "Graph is strongly connected";
        return;
}