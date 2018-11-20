#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll arr[10005];
ll n, k;
ll dp[10005][205];
bool fun (int i, ll sum)
{
    if(i == n)
    {
        if(sum % k == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    if(dp[i][sum] != -1)
        return dp[i][sum];

    ll res =  (fun(i + 1, (sum + arr[i]) % k) | fun(i + 1, (sum - arr[i]) % k));
    dp[i][sum] = res;
    return dp[i][sum];

}
int main()
{
    int tes;
    cin >> tes;
    //freopen("raju.txt", "w+", stdout);
    while(tes--)
    {
        cin >> n >> k;
        memset(dp, -1,sizeof dp);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        bool ans = fun (1, arr[0] % k);
        if(ans)
            cout<<"Divisible" << endl;
        else
            cout<<"Not divisible"<< endl;

            memset(arr, 0, sizeof arr);
    }
}
