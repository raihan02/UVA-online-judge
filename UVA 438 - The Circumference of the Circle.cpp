#include <bits/stdc++.h>
using namespace std;
#define pi  3.141592653589793
struct A
{
    double x,y;
}point;
double dist (A &a, A &b)
{
    double ans = sqrt(((a.x - b.x) * (a.x - b.x)) + ((a.y - b.y) * (a.y - b.y)));
    return ans;
}
int main()
{
    A a, b, c;

    while(cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y)
    {

        double s1, s2, s3;
        s1 = dist(a,b);
        s2 = dist(b, c);
        s3 = dist(c, a);

        //cout<< s1 << " " << s2 << " " << s3 << endl;
        double P = s1 + s2 + s3,s, area;
        s = P / 2;

        area = sqrt(s*(s-s1)*(s-s2)*(s-s3));

        double radius  = (s1 * s2 * s3) / (4* area);
        double circumference = 2 * pi * radius;
        printf("%.2lf\n",circumference);
    }
}
