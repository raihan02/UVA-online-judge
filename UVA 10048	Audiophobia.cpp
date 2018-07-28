#include <bits/stdc++.h>
using namespace std;
int dist[105][105];
void init (int n)
{
    for(int i = 0; i <= n; i++)
    {
        for(int j = 0; j <= n; j++)
        {
            dist[i][j] = INT_MAX;
            dist[i][i] = 1;

        }
    }
}
void floyd(int n)
{
    for(int k = 1; k <= n; k++)
    {
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                dist[i][j] = min(dist[i][j], max(dist[i][k], dist[k][j]));
            }
        }
    }
}
int main()
{
    int n, m, q,o=0;

    while(cin >> n >> m >> q)
    {
        //o++;

        if(n == 0 && m  == 0 && q == 0)
            break;

        init(n);

        for(int i = 0;i < m; i++)
        {
            int a,b, cost;

            cin >> a >> b >> cost;

            dist[a][b] = min(dist[a][b], cost);
            dist[b][a] = min(dist[b][a], cost);
        }
        floyd(n);
        if(o)
            cout<< endl;
        printf("Case #%d\n", ++o);
        while(q--)
        {
            int x,y;
            cin >> x >> y;

            if(dist[x][y] == INT_MAX)
                cout<<"no path" << endl;
            else
                cout<<dist[x][y] << endl;
        }
    }
}
