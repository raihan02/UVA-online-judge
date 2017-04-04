#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n;
    int o = 0;
    while(cin >> n && n)
    {
        o++;
        double X = ceil((3 + sqrt(9 + (8 *n))) / 2);
        printf("Case %d: %.0lf\n",o,X);
    }
}
