#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll prime[260000] , nPrime;
bool mark[2000006];
ll factor[3000];
ll ck;

void sieve(ll n)
{
    ll i , j , limit = sqrt(n * 1.) + 2;
    mark[1] = 1;
    for(int i = 4; i <= n; i += 2)
        mark[i] = 1;
    prime[nPrime++] = 2;

    for(i = 3; i <= n; i++)
    {
        if(mark[i] == 0)
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
vector < pair <ll, ll > > v;
map <ll, ll> mp;
void prime_factor (ll n)
{
    ck = 0;
    int x = n;
    for(int i = 0; prime[i] <= sqrt(n); i++)
    {
        while(n % prime[i] == 0)
        {
           ck++;
            n = n / prime[i];
        }
    }
    if(n > 1)
    {
       ck++;
    }
    mp[x] = ck;
}
int main()
{
    sieve(2000005);
      ll i;
      v.push_back(make_pair(0, 0));
      v.push_back(make_pair(0, 1));
    map <ll, ll> ::iterator it;

    for(i = 2; i <= 2000000; i++)
    {
        ck = 0;
        prime_factor(i);
    }

    for(it = mp.begin(); it != mp.end(); it++)
    {
        v.push_back(make_pair(it->second , it->first));

    }

    ll n;
    sort(v.begin(), v.end());
    ll o = 0;
    while(cin >> n)
    {
        if(n == 0)
            break;
        o++;
        printf("Case %lld: %lld\n", o, v[n].second);
    }

}
