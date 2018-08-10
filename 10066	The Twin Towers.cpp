#include <bits/stdc++.h>
using namespace std;
#define pb push_back
int pr[1005][1005], dp[1005][1005];
vector <int> x, y;
map <char, string> mp1,mx1;
map <string, char > mp,mx;
vector <string> vp;
int lcs (int m, int n)
{
    for(int i = 1; i <= m; i++)
        dp[i][0] = 0;
    for(int j = 0; j <= n; j++)
        dp[0][j] = 0;
    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(x[i-1] == y[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                pr[i][j] = 1;
            }
            else if(dp[i - 1][j] >= dp[i][j - 1])
            {
                dp[i][j] = dp[i-1][j];
                pr[i][j] = 2;
            }
            else
            {
                dp[i][j] = dp[i][j - 1];
                pr[i][j] = 3;
            }
        }
    }
    return dp[m][n];
}
void lcs_print(int i, int j)
{
    if(i == 0 or j == 0)
        return;
    if(pr[i][j] == 1)
    {
        lcs_print(i - 1, j - 1);

    }
    else if(pr[i][j] == 2)
    {
        lcs_print(i-1,j);
    }
    else
    {
        lcs_print(i,j-1);
    }
}
int main()
{

    int n, m;
    int o =0;
    while(cin >> n >> m)
    {
        o++;
        x.clear();
        y.clear();
        memset(dp,0,sizeof dp);
        if(!n and !m )break;
        for(int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            x.pb(a);
        }
        for(int i = 0; i < m; i++)
        {
            int a;
            cin >> a;
            y.pb(a);
        }
        int p = x.size();
        int q = y.size();
        int ans = lcs(p,q);
        printf("Twin Towers #%d\n",o);
        printf("Number of Tiles : %d\n\n",ans);
    }
}


