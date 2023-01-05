function Euler_Cycle(u)
{
    stack = ∅;
    CE = ∅;
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
            CE.pb(s);
        }
    }
    sort.reversed(CE.begin(), CE.end());
    if(CE.begin()==CE.end()) return CE;
}

// Euler Cycle needs to check CE.begin and CE.end