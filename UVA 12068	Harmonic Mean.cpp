#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;

int main()
{
     int S,o=0;
     cin >> S;

     while(S--)
     {
         o++;
         int n;
         cin >> n;
         ll ans = 1;
         ll arr[10] ={0};
         ll y =0;
         for(int i = 0; i < n; i++)
         {
             cin >> arr[i];
             ans *= arr[i];
         }

         for(int i = 0; i < n; i++)
         {
             y += (ans/arr[i]);
         }
         //cout<< ans << endl;
         ll x = ans * n;

        ll  p = __gcd(x,y);
         printf("Case %d: ",o);
         printf("%lld/%lld\n",x/p, y/p);
     }
}
