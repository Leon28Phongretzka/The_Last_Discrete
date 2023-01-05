// Kruskal Algorithm
// Input: Graph with n vertexes and m edges; each edges has a private weight.
// Output: The MST and the total weight

function Kruskal(graph G)
{
    // INIT
    T = ∅; // Create the list of edges of MST
    d(H) = 0; // Total weight of MST
    // Sort weight
    Sort weight of edges list following non-decreasing sort
    // Find the MST and weight
    while(|T|<n-1&&E!=∅)
    {
        e = min_weight in da edges list  // e is the edges has minimum weight in the edge list now 
        E = E \ {e}    // Remove e to E
        if(e is not create cycle)
        {
            T = T union e;
            d(H)+=d(e);
        }
    }
    if(|T|<n-1) return -1;
    else return (T, d(H));
}


// Write Pseudo code for Kruskal algorithm


