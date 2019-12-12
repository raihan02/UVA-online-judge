#include <bits/stdc++.h>
using namespace std;
int dp[10003];
int rem, check;
int classicalDp (int m, int n, int t, bool f)
{
    if( t <= 0 && f == true)
    {
        if(t == 0)
            return 0;
        rem = min(check, rem);
        return -999999;
    }

    if(t ==0 && f == false)
    {
        return 0;
    }
    if(t < 0 && f == false)
    {
        return -9999999;
    }
    check = t;
    if(dp[t] != -1)
    {
        return dp[t];
    }
    dp[t] = max(classicalDp(m , n , t - m, f) + 1 , classicalDp(m, n, t - n, f) + 1);
    return dp[t];
}
int main()
{
    int m,n, t;
    //freopen("prob.txt", "w+", stdout);
    while(cin >> m >> n >> t)
    {
        rem = 9999999;
        if(m > t && n > t)
        {
            cout<< 0 << " " << t << endl;
            continue;
        }

        memset(dp, -1, sizeof dp);

        //reminder = 999999;
        bool f = true;

        int ans = classicalDp(m, n, t, f);

        if(ans > 0)
        {
            cout<< ans << endl;
        }
        else
        {
            f = false;
            memset(dp, -1, sizeof dp);
            int p = t - rem;
            ans = classicalDp(m, n , p, f);
            cout<< ans << " " << rem <<  endl;
        }

       // cout<< ans << endl;
    }
}
