// Write Pseudo code for Prim algorithm
// Input: G = (V, E) is a connected undirected graph with n vertices and m edges with weight
// Output: A minimum spanning tree T of G and the total weight of T
//
Prim(G)
    VH = {v0}                   // v0 is the first vertex in V
    V = V\{v0}                  // Remove v0 from V
    T = ∅                       // T is the set of edges in the minimum spanning tree
    d(H) = 0;                   // d(H) is the total weight of T
    while(V != ∅)
        e = ExtractMin(E)       // e = (u, v) with u in VH and v in V
        T = T ∪ {e}             // Add e to T
        d(H) = d(H) + w(e)      // Update d(H)
        V = V\{v}               // Remove v from V
        VH = VH ∪ {v}           // Add v to VH
    return (T, d(H));


    
