#include <bits/stdc++.h>
using namespace std;
int main()
{
   string s;

   int tes,o= 0;

  // cin >> tes;
   while(cin >> s)
   {
       o++;
       printf("Case %d:\n",o );
       //cin >> s;

       int q;
       cin >> q;
       while(q--)
       {
           int a, b;
           cin >> a >> b;
           if(a > b)
            swap(a,b);

           bool f = false;

           for(int i = a; i < b;i++)
           {
               if(s[i] != s[i + 1])
               {
                   f = true;
                   break;
               }
           }
           if(f)
            cout<<"No"<< endl;
           else
            cout<<"Yes"<< endl;
       }
   }

}
