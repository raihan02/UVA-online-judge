#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll arr[25] ={1, 64, 729, 4096, 15625, 46656, 117649, 262144, 531441,
1000000, 1771561, 2985984, 4826809, 7529536, 11390625, 16777216, 24137569, 34012224,47045881, 64000000 , 85766121
};
int main()
{
   ll n;
   while(cin >> n and n)
   {
       bool f = 0;
       for(int i = 0; i < 25; i++)
       {
           if(n == arr[i])
           {
               f = 1;
               break;
           }
       }
       if(f == 1)
        printf("Special\n");
       else
        printf("Ordinary\n");
   }
}
