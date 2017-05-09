//#include <bits/stdc++.h>
#include <stdio.h>
#include <cmath>
#include <iostream>
#include <cstdio>
using namespace std;

double equation (double x ,double p , double q, double r, double s, double t, double u)
{
    double ans = p * exp(-x) + q * sin(x) + r * cos(x) + s * tan(x) + t * x * x + u;

    return ans;
}
int main()
{
    double mid, p,q,r,s,t,u, res1, res2;

    while(cin >>p >> q >> r >> s >> t >> u)
    {
        double high = 1.0 , low = 0.0;
        while(high - low >= 1e-9)
        {
            mid = (high + low) /2.0;
            res2 = equation(mid , p,q,r,s,t,u);
            if(res2 < 0)
                mid = high = mid;
            else
                low = mid;

        }
        if (abs(res2) <= 1e-4)
        {
            printf("%.4lf\n", (high + low) / 2.0);
        }
        else
        {
            printf("No solution\n");
        }
    }
}

