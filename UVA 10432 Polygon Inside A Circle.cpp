#include <bits/stdc++.h>
using namespace std;
#define pi acos(-1)
int main()
{
    double r, n;

    while(cin >> r >> n)
    {
        double A = r * r * sin((2 * pi)/n);

        printf("%.3lf\n", (A*n)/2);
    }
}
