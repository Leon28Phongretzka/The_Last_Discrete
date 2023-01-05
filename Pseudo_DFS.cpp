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