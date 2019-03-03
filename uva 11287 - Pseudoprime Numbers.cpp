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
bool fun (ll n)
{
    int sq = sqrt(n);

    for(int i = 2; i <= sq; i++)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}
int main()
{
     ll p, a;
    while(cin >> p >> a)
    {
        if(p == 0 && a == 0)
            break;
        if(mods(a,p,p) != a || fun(p) == true)
        {
            printf("no\n");
        }
        else
            {
                printf("yes\n");
            }
    }
}
