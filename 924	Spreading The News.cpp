#include <bits/stdc++.h>
using namespace std;
vector <int> node[20005];
int dist[20005];
int cnt[10005];
void bfs (int src)
{
    dist[src] = 0;
    queue <int>q;
    q.push(src);
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int i = 0; i < node[u].size(); i++)
        {
            int v = node[u][i];

            if(dist[v] == -1)
            {
                dist[v] = dist[u] + 1;
                cnt[dist[v]]++;
                q.push(v);
            }
        }
    }

}
int main()
{
    int E;

    while(cin >> E)
    {
        for(int i = 0; i < E; i++)
        {
            int n;
            cin >> n;
            while(n--)
            {
                int x;
                cin >> x;
                node[i].push_back(x);
            }
        }
        int t;
        cin >> t;
        while(t--)
        {
            memset(dist,-1,sizeof dist);
            memset(cnt,0,sizeof cnt);
            int x;
            cin >> x;
            bfs(x);
            int mx=0, pos=0;
            for(int i = 1; i < E; i++)
            {
                if(mx < cnt[i])
                {
                    mx=cnt[i];
                    pos=i;
                }
            }

            if(mx==0)
                cout<<0<<endl;
            else
            {
                cout<<mx<<" " <<pos<<endl;
            }
        }

        for(int i=0; i<E; i++)
            node[i].clear();
    }

}
