function Dijkstra(Graph, u)                     // Input includes Graph and source is vertex u
// The solution use pritioty queue 
// Set the distance from source to any vertices in the graph
    for each v in Graph.Vertices                // Initialize all vertices
        dist[v] = infinity                      // to be unvisited
        parent[v] = null                        // and have no parent
        add v to Q                              // Add all vertices to Q, with Q is a priority queue
        u.distance = 0                          // Distance from source to source is 0
// If any vertices hasn't distance from source to this, find this distance
    while Q is not empty                        // While Q is not empty
        u = vertex in Q with min dist[u]        // Get the vertex has the minimum distance with u in Queue
        remove u from Q                         // Remove u from Q
        for each v in Adj_list[u]               // For each neighbor v of u
            dist[v]=weight(u,v)                 // distance to v is weight of u to v
    return dist, parent                         // Return the distance and parent of each vertex

