#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tes,o=0;
    cin >> tes;

    while(tes--)
    {
        o++;
        double u, v, d;
        cin >> d >> v >> u;
        double t1, t2;
        t1 = d/u;
        double x = u *u - v * v;
        t2 = d / sqrt(x);
        printf("Case %d: ", o);
        if(t1 == t2 || v >= u)
        {
            printf("can't determine\n");
        }
        else
        {
            printf("%.3lf\n", t2-t1);
        }
    }
}
