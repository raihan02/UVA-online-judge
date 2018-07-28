#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll dp[30005];
int arr[10] = {1,5,10,25,50};
ll coin_change(ll m)
{
    dp[0]=1;
    for(int i = 0; i <5; i++)
    {
        int  p = arr[i];

        for(int j = p; j <= m; j++)
        {
            dp[j] +=  dp[j - p];
        }
    }
    return dp[m];
}
int main()
{
    ll tes;

    while(cin >> tes)
    {
        memset(dp, 0, sizeof dp);
        //cout<<dp[0]<< endl;
        ll m = coin_change(tes);
        if(m == 1)
            printf("There is only %lld way to produce %lld cents change.\n",m,tes);
        else
        printf("There are %lld ways to produce %lld cents change.\n",m,tes);
        //cout<<coin_change(m)<< endl;
    }
}
