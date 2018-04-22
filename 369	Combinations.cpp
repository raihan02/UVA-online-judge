#include<iostream>
#include<cstdio>
#include<cmath>
#include <string.h>
using namespace std;
long long dp[105][105];
long long f (int n , int k)
{
    if(k == 0 || k == n)
        return 1;
    if(dp[n][k] != -1)
        return dp[n][k];
    dp[n][k] = f(n - 1 , k - 1) + f (n - 1, k);

    return dp[n][k];

}
int main()
{
    long long n , k;

    while(cin >> n >> k)
    {
        if(n == 0 && k == 0)
            break;
        memset(dp,-1,sizeof dp);
           long long int res = f(n,k);
         printf("%lld things taken %lld at a time is %lld exactly.\n",n,k,res);
    }
}
