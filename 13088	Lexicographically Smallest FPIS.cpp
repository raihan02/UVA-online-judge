#include <bits/stdc++.h>
using namespace std;
int main()
{
   int tes;
   cin >> tes;

   while(tes--)
   {
       string s;
       cin >> s;
       map <char , int> mp;
       vector <char> vc;
       for(int i = 0; i < s.size(); i++)
       {
           if(mp.count(s[i]) == 0)
           {
               mp[s[i]] = 1;
           }
           else
           {
               mp[s[i]] = mp[s[i]] + 1;
           }
       }

       map <char , int> :: iterator it, it1;
       it1 = mp.begin();
       char ch = it1->first;


       for(it = mp.begin(); it != mp.end(); it++)
       {
           int x = it->second;

           if(x > 1)
           {
               for(int i = 0; i < x - 1; i++)
               {
                   vc.push_back(ch);
               }
           }
           vc.push_back(it->first);
       }

       sort(vc.begin(), vc.end());
       string res;
       res= "";
       for(int i = 0; i < vc.size(); i++)
        res += vc[i];//cout<< vc[i];
       cout<< res << endl;

       res.clear();
       mp.clear();
       vc.clear();

   }
}
