#include <bits/stdc++.h>
using namespace std;
int main()
{
   char c;
   string s = "";

   while(cin >> c)
   {

       s += c;
       while(cin >> c)
       {
           if(c == '#')
            break;
           s += c;

       }
       int res = 0;
       for(int i = 0; i < s.size(); i++)
       {
           res = res * 2 + s[i] - '0';
           res %= 131071;
       }
       if(!res)
        printf("YES\n");
       else
        printf("NO\n");
       s.clear();

   }

}
