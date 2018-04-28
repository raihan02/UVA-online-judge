#include <bits/stdc++.h>
using namespace std;
double dis (double x1, double y1, double x2, double y2)
{
    return sqrt((x1-x2) *(x1 -x2) + (y1-y2) * (y1-y2));
}
vector<int> node[10005];
bool vis[10005];
int cnt = 0;
void dfs (int u)
{

    vis[u] = true;
    for(int i = 0; i < node[u].size(); i++)
    {
        int v = node[u][i];
        if(vis[v] == false)
            dfs(v);
    }
}
int main()
{
   int n;
   double d;
   int tes,o=0;
   scanf("%d", &tes);
   while(tes--){
    scanf("%d", &n);
    scanf("%lf", &d);
        o++;
       
       memset(vis, false, sizeof vis);

       vector <pair <double , double > > v;
       for(int i = 1;i <= n; i++)
       {
           double x1, x2;
          scanf("%lf %lf", &x1,&x2);
            v.push_back(make_pair(x1,x2));
       }

       for(int i = 0; i < n; i++)
       {
           for(int j = 0; j < n; j++)
           {
               if(i == j)
                continue;
               double ans = dis(v[i].first, v[i].second, v[j].first, v[j].second);
                if(ans <= d)
                {
                    node[i].push_back(j);
                    node[j].push_back(i);
                }
           }
       }
       cnt = 0;
       for(int i = 0; i < n; i++)
       {
          if(vis[i] == false)
            dfs(i), cnt++;

       }
       printf("Case %d: %d\n", o, cnt);
       v.clear();
       for(int i = 0; i < n;i++)node[i].clear();

   }
}
