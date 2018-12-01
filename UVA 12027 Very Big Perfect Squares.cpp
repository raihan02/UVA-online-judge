#include <bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   while(cin >> s)
   {
       if(s == "0")
        break;
       int x = s[0] - 48;

       if(s.size() > 1 && (s.size() % 2 == 0 ))
       {
           x = x * 10 + s[1] - 48;
       }

       int p = (s.size() -1)/2;
      int t = sqrt(x);
       cout<< t;// << endl;
       for(int i = 0; i < p; i++)
        cout<<0;
       cout<< endl;
   }

}
