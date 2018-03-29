#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll arr[100000000];
int main()
{
     ll Z, I, M, L;
     int o =0;
     while(cin >> Z >> I >> M >> L)
     {
         o++;
         if(Z == 0 && I == 0 && M == 0 && L == 0)
         {
             break;
         }
         ll cnt = 0;
         ll res = 0;
         map <ll, ll> mp;
         while(1)
         {


             res = (Z * L + I) % M;
              if(mp.count(res) == 0)
                mp[res]=1;
              else
                mp[res] = mp[res]+ 1;

              if(mp[res] > 1)
                break;
                L =res;
              cnt++;
         }

          mp.clear();
         printf("Case %d: ",o);
         cout<< cnt << endl;
     }

}

