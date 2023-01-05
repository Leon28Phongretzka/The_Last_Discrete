
#include<bits/stdc++.h>
using namespace std;
class Graph
{
	int V;
	vector<list<int>> adj;
public:
	Graph(int V);
	void addEdge(int v, int w);
	void BFS(int s);
};

Graph::Graph(int V)
{
	this->V = V;
	adj.resize(V);
}

void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w); // Add w to v’s list.
}

void Graph::BFS(int s)
{
	vector<bool> visited;
	visited.resize(V,false);
	list<int> queue;
	visited[s] = true;
	queue.push_back(s);

	while(!queue.empty())
	{
		s = queue.front();
		cout << s << " ";
		queue.pop_front();
		for (auto adjecent: adj[s])
		{
			if (!visited[adjecent])
			{
				visited[adjecent] = true;
				queue.push_back(adjecent);
			}
		}
	}
}

int main()
{
	int n,m;
    Graph g(n);
	cin >> n >> m;
    for(int i=0; i<m; i++)
    {
        int x,y; cin >> x >> y;
        g.addEdge(x,y);
    }
	int k; cin >> k;
	g.BFS(k);
}

// 9 9
// 1 2
// 1 3
// 1 5
// 2 4
// 3 6
// 3 7
// 3 9
// 5 8
// 8 9
// 1

