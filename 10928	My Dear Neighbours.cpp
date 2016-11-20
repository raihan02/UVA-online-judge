#include <bits/stdc++.h>
using namespace std;
vector <int> node[1001];
int main()
{
   int tes;
   scanf("%d", &tes);
   while(tes--)
   {
       int p , t;
       scanf("%d", &p);
       for(int i = 1; i <= p; i++)
       {
           while(1)
           {
               scanf("%d", &t);
               node[i].push_back(t);
              char ch = getchar();
              if(ch == '\n')
                break;
           }
       }
       int mn = 9999999;
       for(int i = 1; i <= p; i++)
       {
           if(mn > node[i].size())
             mn = node[i].size();
       }
       int x = 0;
       for(int i = 1; i <= p; i++)
       {
           if(mn == node[i].size())
            {
                if(!x){
                    printf("%d",i);
                x = 1;
                }
                else
                    printf(" %d",i);

            }
       }
       printf("\n");

       for(int i = 0;i <= p; i++) node[i].clear();
   }

}
