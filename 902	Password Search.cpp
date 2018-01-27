#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   string s;

   while(cin >> n >> s)
   {
       map <string, int> mp;
       for(int  i = 0; i < s.size(); i++)
       {
           string s1 = s.substr(i ,  n);
           //cout<< s1 << endl;
           if(s1.size() == n)
           {
               if(mp.count(s1) == 0)
               {
                   mp[s1] =1;
               }
               else
                mp[s1] = mp[s1]+ 1;
           }
           s1.clear();

       }

       map <string , int > :: iterator it;
       int mx = 0;
       string res = "";
       for(it = mp.begin(); it != mp.end(); it++)
       {
           if(mx < it->second)
           {
               mx = it->second;
               res = it->first;
           }
       }

       cout<< res << endl;
   }



}
