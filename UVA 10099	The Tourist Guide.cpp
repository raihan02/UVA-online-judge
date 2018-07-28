#include <bits/stdc++.h>
using namespace std;
int dist[105][105];
void init (int n)
{
    for(int i = 0; i <= n; i++)
    {
        for(int j = 0; j <= n; j++)
        {
            dist[i][j] = 0;
            //dist[i][i] = ;
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
                dist[i][j] = max(dist[i][j], min(dist[i][k],dist[k][j]));
            }
        }
    }
}
int main()
{
    int n, m, q,o=0;
    while(cin >> n >> m )
    {

        //o++;
        if(n == 0 && m  == 0)
            break;
        init(n);
        for(int i = 0; i < m ;i++)
        {
            int a,b, cost;
            cin >> a >> b >> cost;
            dist[a][b] = cost;//min(dist[a][b], cost);
            dist[b][a] = cost;//min(dist[b][a], cost);
        }


        int x, y, c;

        cin >> x >> y >> c;
        floyd(n);
        printf("Scenario #%d\nMinimum Number of Trips = ",++o);
        cout<<ceil((double)c/ (double)(dist[x][y] -1)) << endl<< endl;



    }
}
