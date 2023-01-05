function Euler_Path(int u)
{
    stack = ∅;
    EP = ∅;
    stack.pb(u);
    while(stack != ∅ )
    {
        s = stack.top();
        if(adj[s]!=∅)
        {
            t = adj[s][0];
            stack.push(t);
            E = E \ {s,t};
        }
        else
        {
            stack.pop(s);
            EP.pb(s);
        }
    }
    sort.reversed(EP.begin(), EP.end());
    if(EP.begin()!=EP.end()) return EP;
}