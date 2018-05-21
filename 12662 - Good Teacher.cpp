#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   while(cin >> n)
   {
       string s[100];
       for(int i = 0; i < n; i++)
       {
          cin >> s[i];
       }
       //cout<<s<< endl;
       int q;
       cin >> q;

       while(q--)
       {
           int p;
           cin >> p;
           p = p - 1;


           if(s[p] != "?")
           {
               cout<< s[p]<< endl;
               continue;
           }
           int cnt1 = 0, cnt2 = 0, f1 = 0, f2 = 0;
           string ch1, ch2;
           for(int i = p; i < n; i++)
           {

               if(s[i] != "?"){
                ch1 += s[i];
                break;
               }
               cnt1++;
               if(i == n-1){
                f1= 1;
                break;
               }
           }
           for(int i = p; i >= 0; i--)
           {

               if(s[i] != "?"){
                ch2 += s[i];
                break;
               }
               cnt2++;
               if(i == 0){
                f2 = 1;
                break;
               }
           }

           //cout<<ch1 << " " << cnt1 << " " << ch2 << " " << cnt2 << endl;
           if(cnt1 == 0 || f1)
           {
               for(int i = 0; i < cnt2; i++)
               {
                   cout<<"right of ";
               }
               cout<<ch2 << endl;

           }
           else if(cnt2 == 0 || f2)
           {
               for(int i = 0; i < cnt1; i++)
               {
                   cout<<"left of ";
               }
               cout<<ch1 << endl;

           }
           else if(cnt1 == cnt2)
           {
               cout<<"middle of "<<ch2<<" and "<<ch1<< endl;
           }
           else if(cnt1 < cnt2)
           {
               for(int i = 0; i < cnt1; i++)
               {
                   cout<<"left of ";
               }
               cout<< ch1<< endl;
           }
           else
           {
               for(int i = 0; i < cnt2; i++)
               {
                   cout<<"right of ";
               }
               cout<<ch2<< endl;
           }

           //cout<<s<< endl;

       }
   }
   return 0;
}
