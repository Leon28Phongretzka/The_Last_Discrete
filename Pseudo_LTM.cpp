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
function Check_SCC(graph G)
{
    // Lien thong manh la luon co duong di giua 2 dinh bat ky trong do thi co huong
    // Lien thong yeu la do thi vo huong cua do thi ban dau lien thong
    // Khong lien thong la cac truong hop con lai
    memset(visited, false, sizeof(visited));
    for each u in V
    {
        // if DFS or BFS of any vertexes isn't V, return Not SCC
        // and else
        if(DFS(u)!=V)
        {
           return false;
        }
    }
    return true;
}