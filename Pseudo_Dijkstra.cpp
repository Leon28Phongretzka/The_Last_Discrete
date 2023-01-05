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
            alt = dist[u] + weight(u, v)        // alt is the distance from source to v through u
            if(alt < dist[v])                   // If alt is smaller than the current distance from source to v
                dist[v] = alt                   // Update the distance from source to v
                parent[v] = u                   // Update the parent of v
    return dist, parent                         // Return the distance and parent of each vertex


// Step 1: INIT
// Source = 1
// Vertices list has 10 vertexes
// dist[2]=dist[3]=...=dist[10]=INF;
// part[2]=part[3]=...=part[10]=NULL;

// Step 2: while any distance is Undef, find this
// Get u is the min dist[u] in Queue
// Remove this vertex
// For each v in adj_list[u]
//      alt = dist[u]+weight(u,v);
//      Compare alt with dist[v] and return the distance and parent of this vertex