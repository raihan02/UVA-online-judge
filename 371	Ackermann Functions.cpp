#include <bits/stdc++.h>
using namespace std;
long long cnt = 0;
long long fun (long long n)
{
    cnt++;
    if(n == 1)
        return n;
    if(n % 2 == 0)
        return fun(n / 2);
    else
        return   fun(3 *n + 1);
}
int main()
{
    long long  a, b;
    while(cin >> a >> b)
    {
        if(a > b)
        {
            swap(a, b);
        }
        if(a == 0 && b == 0)
            break;
        if(a == 1 && b == 1)
        {
            printf("Between 1 and 1, 1 generates the longest sequence of 3 values.\n");
            continue;
        }

        long long mx = -1, ans = 0;
        for(int i = a; i <= b; i++)
        {
            cnt = 0;
            fun(i);
            if(mx < cnt - 1)
            {
                mx = cnt - 1;
                ans = i;
            }

        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",a,b,ans, mx);
    }


}
