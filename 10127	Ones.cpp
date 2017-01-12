#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mods (ll n , ll p , ll m)
{
    if(p == 0)
        return 1;
    if(p % 2 == 0)
    {
        ll ret = mods(n, p/2,m);
        return ((ret % m) * (ret % m)) % m;
    }
    else
        return ((n % m) * (mods(n ,p -1,m) % m) ) % m;
}
int main()
{
   ll n, p, m;
   int c= 0;
   //ll n;
   while(cin >> n)
   {
       ll a = 1;
       ll b = 10;
       ll cnt = 1;
       while(a % n != 0)
       {
           a = a * b + 1;
           cnt++;
           a = mods(a , 1, n);
       }
       cout<< cnt << endl;
   }

}
