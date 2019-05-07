#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, c;
    while(cin >> a >> b >> c)
    {

        double P = a + b + c;
        double s = P/2;
        double area = sqrt(s*(s-a)*(s-b)*(s-c));
        printf("The radius of the round table is: ");
        if(a <= 0 or b <= 0 or c <= 0)
        {
            printf("0.000\n");
        }
        else
        printf("%.3lf\n", area/s);
    }
}
