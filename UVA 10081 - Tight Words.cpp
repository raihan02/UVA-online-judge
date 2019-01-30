#include <bits/stdc++.h>
using namespace std;

double dp[101][101];
int main()
{
    int k, n;
    while (cin >> k >> n)
    {
        for (int i = 0; i <= k; ++ i)
        {
            dp[1][i] = 1.0/ ( k + 1);
        }
        for (int i = 2; i <= n; ++ i)
        {
            for (int j = 0; j <= k; ++ j)
            {
                dp[i][j] = 0.0;
                for (int t = 0; t <= k; ++ t)
                {
                    if (abs(t-j) > 1)
                    {
                        continue;
                    }
                    dp[i][j] += dp[i - 1][t] / (k + 1);
                }
            }
        }

        double sum = 0.0;
        for (int i = 0; i <= k; ++ i)
            sum += dp[n][i];
        printf("%.5lf\n", 100.0 * sum);
    }
    return 0;
}
