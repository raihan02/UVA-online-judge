#include <bits/stdc++.h>
using namespace std;
#define pb push_back
int pr[1005][1005], dp[1005][1005];
vector <string> x, y;
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
        vp.pb(x[i-1]);
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

    string s1,s2;

    while(getline(cin, s1))
    {

        istringstream is(s1);
        while(is>>s2)
        {
            x.push_back(s2);
        }
        while(getline(cin, s1))
        {
            if(s1 == "#") break;
            istringstream is(s1);
            while(is>>s2)
            {
                x.push_back(s2);
            }
        }
        while(getline(cin, s1))
        {
            if(s1 == "#")
                break;
            istringstream is(s1);
            while(is>>s2)
            {
                y.push_back(s2);
            }
        }

        int m = x.size();
        int n = y.size();

       // cout<<lcs(m,n)<< endl;
       lcs(m,n);
        lcs_print(m,n);
        if(vp.size()!= 0)
        {
            for(int i = 0; i < vp.size()-1; i++)
                cout<< vp[i]<< " ";
            cout<< vp[vp.size()-1]<< endl;
        }
        x.clear();
        y.clear();
        vp.clear();
    }

}


