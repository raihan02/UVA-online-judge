#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tes, o = 0, cnt;
    cin >> tes;

    while(tes--)
    {
        int n, totalAmount;
        cin >> totalAmount;
        cin >> n;

        int tot = 0, mx = 0;
        int dp[10004] = {};
        dp[0] = 1;
        while(n--)
        {
            int amount;
            cin >> amount;
            tot += amount;

            if(tot > 10000)
            {
                tot = 10000;
            }
            for (int i = tot; i >= amount; i--)
            {
                if(dp[i] == 0 or dp[i] > dp[i - amount] + 1)
                {
                    if(dp[i - amount])
                    {
                        dp[i] = dp[i - amount] + 1;
                    }
                }
            }
        }
        while(dp[totalAmount] == 0){
            totalAmount++;
        }
        printf( "%d %d\n", totalAmount, dp[totalAmount] - 1);
    }
}
