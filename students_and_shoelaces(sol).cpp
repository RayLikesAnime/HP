#include<bits/stdc++.h>
using namespace std;
int main () 
{
    int n,m;
    cin>>n>>m;
    vector<int> graph[n+1];
    for (int i = 0; i < m; i++) 
    {
        int x, y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    int ans = 0;
    while (1) 
    {
        int num = 0;
        vector <int> tmp;
        for (int i = 1; i <= n; i++) 
        {
            if (graph[i].size() == 1) 
            {
                num++;
                tmp.push_back(i);
            }
        }
        if (num > 0) 
        {
            ans++;
            for (int i = 0; i < num; i++) 
            {
                int neigh = graph[tmp[i]][0];
                graph[tmp[i]].clear();
                graph[neigh].erase(remove(graph[neigh].begin(), graph[neigh].end(),tmp[i]), graph[neigh].end());
            }
        }
        else 
        {
            break;
        }
    }
    cout<<ans<<endl;
}