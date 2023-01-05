DFS Pseudo Code use Backtracking
function DFS(int u)
{
    visited[u]=true;
    for each v in adj[u]
    {
        if(!visited[v])
            DFS(v);
    }
}
function TPLT(graph G, int u)
{
    TPLT = 1;
    DFS(u);
    for each v in V
    {
        if(!visited[v])
        {
            TPLT++;
            DFS(v);
        }
    }
}