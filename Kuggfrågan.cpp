//https://open.kattis.com/challenge/og6qoa5b/submissions/17565690
#include <bits/stdc++.h>
using namespace std;
bool works(vector<vector<int>>& adj, int n)
{
    vector<int> color(n,-1);
    queue<int> q;
    for (int i=0;i<n;++i)
    {
        if (color[i]==-1)
        {
            q.push(i);
            color[i]=0;
            while (!q.empty())
            {
                int u=q.front();
                q.pop();
                for (int v:adj[u])
                {
                    if (color[v]==-1)
                    {
                        color[v]=color[u]^1;
                        q.push(v);
                    }
                    else if (color[v]==color[u]) return false;
                }
            }
        }
    }
    return true;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n);
    for (int i=0;i<m;++i)
    {
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    if (works(adj, n)) cout << "attend here" << endl;
    else cout << "no way" << endl;    
    return 0;
}
