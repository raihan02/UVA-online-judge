#include <bits/stdc++.h>
using namespace std;
int ua[2005], va[2005], wa[2005];
int dist[2005];
int main()
{

   int n, m;
     int tes;
     cin >> tes;
     while(tes--){
     cin >> n >> m;

       for(int i = 1; i <= m; i++)
       {
           cin >> ua[i] >> va[i] >> wa[i];
       }
       memset(dist, 63, sizeof dist);
       dist[1] = 0;
       bool neg_cycle = false;
       for(int s = 1; s <= n; s++)
       {
           bool update = false;
           for(int i = 1; i <= m; i++)
           {
               int u = ua[i], v = va[i];
               if(dist[v] > dist[u] + wa[i])
               {
                   dist[v] = dist[u] + wa[i];
                   update = true;
                   if(s == n)
                   {
                       neg_cycle = true;
                   }
               }
           }
           if(update == false)
             break;
       }

       if(neg_cycle == true)
       {
           printf("possible\n");
       }
       else
       {
            printf("not possible\n");
       }

     }

}
