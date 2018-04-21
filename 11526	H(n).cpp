#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tes;
    scanf("%d", &tes);
    while(tes--)
    {
        ll n;
        scanf("%lld", &n);
        ll sq = sqrt(n);
        ll sum = 0;
        for(int i = 1; i <= sq; i++)
        {
            sum += (n / i);
        }

        sum= sum * 2;
        sum= sum - (sq* sq);

        printf("%lld\n", sum);
    }
}
