#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,P[10009],m,i,j,sum=0,diff,P1[10009],k,mini,a,b;
    while(cin>>N){
         for(int i = 0; i < N; i++)
         {
             scanf("%d", &P[i]);
         }
         scanf("%d", &m);
         sort(P,P+N);
         int res = 0 , mn = 100000000;
         for(int i = 0; i < N; i++)
         {
             int x =  P[i];
              bool mouri_treat = false;
              int p = m - x;
               mouri_treat = binary_search(P,P+N, p);

             if(mouri_treat == true)
             {
                 if(mn > abs( x - p))
                 {
                     mn = abs(x - p);
                      a = x;
                     b =  p;
                 }
             }

         }

         printf("Peter should buy books whose prices are %d and %d.\n\n",a,b);

    }

return 0;
}
