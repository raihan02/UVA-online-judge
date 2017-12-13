#include <bits/stdc++.h>
using namespace std;
map <string, int > mp;
map <string, int> :: iterator it3;
bool check (string s1, string s2)
{
    if(mp[s1] != mp[s2])
        return mp[s1] > mp[s2];
    else
       return s1 < s2;

}
int main()
{
    string s;
    map <string , string> st;

    map <string, bool > mp1;
    map <string, string > :: iterator it1;
    map <string, bool> :: iterator it2;

   while(1)
   {
       int f = 0;
       string x, y,z;

       while(getline(cin , s))
       {
           if(s == "0")
           {
               f = 1;
               break;
           }
           if(s == "1")
           {
               break;
           }
           if(s[0] >= 'A'  && s[0] <= 'Z')
           {
               x = s;
               mp[x] = 0;
           }
           else
           {
               y = s;
               it1 = st.find(y);
               it2 = mp1.find(y);

               if(it1 == st.end() && it2 == mp1.end())
               {
                   st[y] = x;
               }

               if(it1 != st.end() && it1->second != x)
               {
                   mp1[it1->first] = true;
                   st.erase(it1);
               }
           }
       }
       if(f == 1)
       {
           break;
       }

       for(it1 = st.begin(); it1 != st.end(); it1++)
       {
           ++mp[it1->second];
       }
       vector <string> vs;

       for(it3 = mp.begin(); it3 != mp.end(); it3++)
       {
             vs.push_back(it3->first);
       }
       sort(vs.begin(), vs.end(), check);

       for(int i = 0; i < vs.size(); i++)
        cout<< vs[i] << " " << mp[vs[i]] << endl;
       vs.clear();
       st.clear();
       mp.clear();
       mp1.clear();

   }
}
