#include <bits/stdc++.h>
using namespace std;
long arr[100005];
int c;
int dp[10005];
#define inf 99999999
void squre ()
{
    for(int i =1; i <= 100; i++ )
    {
        arr[i] = i * i;
    }
    for(int i = 0; i <= 10000;i++) dp[i] = 999999;
  dp[0]=0;
    for(int i = 1; i <= 100; i++)
    {
        for(int j = arr[i]; j <= 10000; j++)
        {
            dp[j] = min(dp[j], dp[j - arr[i]]+1);
        }
    }
}
int main()
{
    squre();

    int tes;
    cin >> tes;
    while(tes--)
    {
        int n;
        cin >> n;

        cout<< dp[n] << endl;
    }
}
