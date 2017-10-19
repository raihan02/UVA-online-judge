#include <bits/stdc++.h>
using namespace std;
int dist[35];
vector <int> node[35];
int visit[35];
void bfs (int u)
{
    dist[u]  = 0;
    queue <int> q;
    q.push(u);

    while(!q.empty())
    {
        int uu = q.front();
        q.pop();

        for(int i = 0; i < node[uu].size(); i++)
        {
            int v = node[uu][i];

            if(dist[v] == -1)
            {
                dist[v] = dist[uu] + 1;
                q.push(v);
            }
        }
    }
}
int main()
{
    int e;
    int o = 0;
    while(cin >> e)
    {

        if( e == 0)
            break;

        map <int, int> mp;
        int in = 0;
        for(int i = 0; i < e; i++)
        {
            int a, b;
            cin >> a >> b;

            if(mp.find(a) == mp.end())
                mp[a] = in++;
            if(mp.find(b) == mp.end())
                mp[b] = in++;
            node[mp[a]].push_back(mp[b]);
            node[mp[b]].push_back(mp[a]);


        }

        int x, ttl;

        while(cin >> x >> ttl)
        {
            if(x == 0 && ttl == 0)
                break;
            o++;
            memset(dist, -1, sizeof dist);

            int cnt = 0;
            bfs(mp[x]);
            //cout<<mp[x] << endl;
             for(int i = 0; i < in; i++)
                {
                    if(i == mp[x])
                    continue;

                    if(dist[i] > ttl || dist[i] == -1)
                        cnt++;
                }


            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n", o,cnt,x,ttl);
        }
        mp.clear();
      for(int i = 0; i <= 35; i++)
        node[i].clear();
    }

}
