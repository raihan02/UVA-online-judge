#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 ll dp[70][70];
 string s;
 ll fun (int i, int j)
 {
    // ll ans;
     if(i > j)
        return 0;
     if(i == j)
        return 1;
     if(dp[i][j] != -1)
        return dp[i][j];
      ll ans = fun(i + 1, j) + fun(i, j -1)  - fun(i + 1, j - 1);

      if(s[i] ==s[j])
        ans += 1 + fun(i + 1, j - 1);

      return dp[i][j] = ans;


 }
int main()
{
    int tes;
    cin >> tes;

    while(tes--)
    {
        memset(dp, -1,sizeof dp);
        cin >> s;

       cout<< fun(0, s.size() - 1) << endl;
    }
}
