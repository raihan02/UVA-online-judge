#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int mark[10000002];
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


void sieve(ll n)
{
    int i , j , limit = sqrt(n * 1.) + 2;
    mark[1] = 1;
    for(int i = 4; i <= n; i += 2)
        mark[i] = 1;
    for(i = 3; i <= n; i++)
    {
        if(!mark[i])
        {
            if(i <= limit)
            {
                for(j = i * i; j <= n; j+= i * 2)
                {
                    mark[j] = 1;
                }
            }
        }
    }
}
bool fun (ll n)
{
    for(int i = 2;  i <= n - 1; i++)
    {
        if(mods(i, n, n) != i)
            return false;
    }
    return true;
}
int main()
{
   sieve(65005);

   ll n;
   while(cin >> n)
   {
       if(!n)
        break;

        if(mark[n] == 1 && fun(n) == 1)
        {
            printf("The number %lld is a Carmichael number.\n",n);
        }
        else
        {
            printf("%lld is normal.\n",n);
        }



   }
}
