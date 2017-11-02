#include <stdio.h>

int fact[10005];
void solve()
{
    int i;
    fact[1] = 1;
    for(i = 2; i <= 10000; i++)
    {
        fact[i] = (fact[i - 1] * i);

        while(fact[i] % 10 == 0)
        {
            fact[i] = fact[i] / 10;
        }

        fact[i] = fact[i] % 100000;
    }
}

int main()
{
    int n;
    solve();
    while(scanf("%d", &n) == 1)
    {
        printf("%5d -> %d\n",n,fact[n] % 10);
    }

}
