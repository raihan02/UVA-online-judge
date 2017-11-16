#include <bits/stdc++.h>
using namespace std;
int main()
{
   int a, b, c, d;

   while(cin >> a >> b >> c >> d )
   {
       if(!a and !b and !c and !d)
        break;
      int x, ans = 1080;
      x = a - b;

      if(x < 0)
      {
          x =  x + 40;
      }
      ans += x * 9;

      x = c - d;

      if(x < 0)
      {
          x = x + 40;
      }
      ans += x* 9;

      x = c - b;

      if(x < 0)
        x += 40;

      ans += x * 9;

      cout<< ans << endl;

   }

}
