#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll prime[3000000] , nPrime;
int mark[1000002];
vector<ll> v;
void sieve(ll n)
{
    int i , j , limit = sqrt(n * 1.) + 2;
    mark[1] = 1;
    for(i = 4; i <= n; i += 2)
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

void fun()
{
    int i;
    ll a, b;
    for(i = 0; i < nPrime; i++)
    {
        a = prime[i], b = prime[i];
        while(a * b <= 1000000000000)
        {
            a *= b;
            v.push_back(a);
        }
    }

}
int main()
{
    sieve(1000001);
    fun();
    sort(v.begin(), v.end());
    int tes;
    cin >> tes;

    while(tes--)
    {
        ll a, b;
        cin >> a >> b;

        ll x = upper_bound(v.begin(), v.end(), b) - v.begin();

        ll y = lower_bound(v.begin(), v.end(), a) - v.begin();

        cout<< x - y << endl;
    }
}
