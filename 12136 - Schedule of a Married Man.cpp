#include <bits/stdc++.h>
using namespace std;
int main()
{
   int tes,o=0;
   cin >> tes;

   while(tes--)
   {
       o++;
       string a,b,c,d;

       cin >> a >> b >> c >> d;

        int h1=0,m1=0,h2=0,m2=0, h3=0,m3=0,h4=0,m4=0;
        h1 = a[1] - 48 + (a[0] - 48)* 10;
        m1 = a[4] - 48 + (a[3] - 48)* 10;

        h2 = b[1] - 48 + (b[0] - 48)* 10;
        m2 = b[4] - 48 + (b[3] - 48)* 10;

        h3 = c[1] - 48 + (c[0] - 48)* 10;
        m3 = c[4] - 48 + (c[3] - 48)* 10;

        h4 = d[1] - 48 + (d[0] - 48)* 10;
        m4 = d[4] - 48 + (d[3] - 48)* 10;
        int w,x,y,z;
        w = h1 * 60 + m1;
        x = h2 * 60 + m2;
        y = h3 * 60 + m3;
        z = h4 * 60 + m4;

        if(w > z || y > x)
            printf("Case %d: Hits Meeting\n",o);
        else
            printf("Case %d: Mrs Meeting\n",o);
   }

}
