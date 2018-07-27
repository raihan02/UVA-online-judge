#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int prime[3000000] , nPrime;
int mark[10000002];
void sieve(int n)
{
    prime[nPrime++]=1;
    int i , j , limit = sqrt(n * 1.) + 2;
    mark[1] = 1;
    for(int i = 4; i <= n; i += 2)
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
int dp[100005];
int n, m;
int coin_change ()
{
    dp[0] = 0;

    for(int i = 0; i < n; i++)
    {
        int x = prime[i];
        for(int j = x; j <= m; j++)
        {
            dp[j] = min(dp[j], dp[j - x] + 1);
        }
    }
    return dp[m];
}
int main()
{
    sieve(55555);
    int tes;
    cin >> tes;

    while(tes--)
    {

        memset(dp, 63, sizeof dp);
        //cout << dp[0] << endl;
        cin >> n >> m;
       cout<< coin_change()<< endl;

    }
}
