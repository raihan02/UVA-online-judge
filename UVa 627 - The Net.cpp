#include <bits/stdc++.h>
using namespace std;
vector <int> node[400];
int parent[3000];
int dist[3005];
char ch[3005],   *token;
void bfs (int s, int d)
{
    dist[s] = 0;
    queue <int> q;
    q.push(s);
    while(!q.empty())
    {
        int x = q.front();

        if(x == d)
            return;

        q.pop();

        for(int i = 0; i < node[x].size(); i++)
        {
            int v = node[x][i];

            if(dist[v] == -1)
            {
                dist[v] = dist[x] + 1;
                parent[v] = x;
                q.push(v);
            }
        }
    }

}
void init ()
{
    for(int i = 0; i <= 305; i++)
    {
        parent[i] = i;
        dist[i] = -1;
    }
}
void path (int ss)
{
    vector <int> v;

    v.push_back(ss);

    while(parent[ss] != ss)
    {
        ss = parent[ss];
        v.push_back(ss);
    }
    reverse(v.begin(), v.end());

    cout<< v[0];

    for(int i = 1; i < v.size(); i++)
    {
        cout<< " "  <<v[i];
    }
    cout<< endl;
    v.clear();
}
int main()
{
    int n, x, y;

    while(~scanf("%d", &n))
    {
        getchar();
        for(int i = 0; i <= n; i++)
        {
            node[i].clear();
        }


        while(n--)
        {
            gets(ch);

            token = strtok(ch, "-,");

            x = atoi(token);

            //printf("%d\n" , x);

            token = strtok(NULL, "-,");

            while(token != NULL)
            {
                y = atoi(token);

                node[x].push_back(y);

                token = strtok(NULL, "-,");
            }


        }
        int m;
            cin >> m;
             printf("-----\n");

             while(m--)
             {
                 int s, d;
                 init();
                 cin >> s >> d;
                 bfs(s, d);
                 if(dist[d] == -1)
                 {
                     printf("connection impossible\n");
                 }
                 else
                    path(d);
             }
    }

}
