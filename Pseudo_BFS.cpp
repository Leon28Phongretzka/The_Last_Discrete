BFS Pseudo Code ( queue )
function BFS(int u)
{
    visited[u]=true;
    queue q;
    q.pb(u);
    while(q != empty)
    {
        v = q.front;
        q.pop();
        for each t in adj[v]
            if(!visited[t])
            {
                visited[t]=true;
                q.pb(t);
            }
    }

}