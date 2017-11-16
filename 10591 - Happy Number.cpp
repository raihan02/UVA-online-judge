#include <bits/stdc++.h>
using namespace std;
long summ (int n)
{
    long res =0;
    while(n > 0)
    {
        res = res + ((n % 10) * (n % 10));
        n/=10;
    }
    return res;
}
int main()
{
    long a, b, c, d;

    int tes,o=0;
    cin >> tes;

    while(tes--)
    {
        long n;
        cin >> n;
         long x = n;
        while(1)
        {
            x = summ(x);

           if(x / 10 == 0)
                break;
        }
        o++;
        if(x == 1)
       printf("Case #%d: %d is a Happy number.\n",o,n);
       else
        printf("Case #%d: %d is an Unhappy number.\n",o,n);
    }
}
