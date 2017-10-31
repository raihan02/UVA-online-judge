#include <bits/stdc++.h>
using namespace std;
#define sll(n) scanf("%lld", &n)
#define sc(n) scanf("%d", &n)
typedef long long int ll;
ll prime[670000] , nPrime;
bool mark[10000001];
void sieve(ll n)
{
    ll i , j , limit = sqrt(n * 1.) + 2;
    mark[1] = 1;
    for( i = 4; i <= n; i += 2)
        mark[i] = 1;
    prime[nPrime++] = 2;

    for(i = 3; i <= n; i++)
    {
        if(!mark[i])
        {
            prime[nPrime++] = i;
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
ll prime_factor (ll n)
{
     ll res = 1, x =n;
    for(int i = 0; prime[i] <= sqrt(n); i++)
    {
        ll cnt = 0;
        while(n % prime[i] == 0)
        {
            printf("    %lld\n", prime[i]);
            cnt++;
            n = n / prime[i];
        }
        res = res * (cnt + 1);
    }
    if(n > 1)
    {
        printf("    %lld\n", n);

        res = res * 2;
    }
    cout<< endl;
}
int main()
{
    sieve(10000000);
     int tes , o =0 ;

      ll n;
      while(scanf("%lld", &n) == 1)
      {
          if(n < 0)
            break;

         o++;
         //ll n;
         //scanf("%lld", &n);
           prime_factor(n);
         //printf("Case %d: %lld\n",o, prime_factor(n));
      }
}
