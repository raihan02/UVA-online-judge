#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
   string s;
    vector <string> vs, vp;
    map <string , int> mp;
   while(cin >> s)
   {
       if(s == "#")
       {
           break;
       }
       string ss=  s;
       vs.push_back(ss);
       for(int i = 0; i < ss.size(); i++)
       {
           if(ss[i] >= 'a' && ss[i] <= 'z')
            ss[i] = ss[i] - 32;

       }
       //cout<< ss << endl;
       sort(ss.begin(),ss.end());
       if(mp.count(ss) == 0)
            mp[ss] = 1;
       else
        mp[ss] = mp[ss] + 1;

   }

   for(int i = 0; i < vs.size(); i++)
   {
       string sp = vs[i];
       string sk = sp;

       for(int j = 0; j < sk.size(); j++)
       {
           if(islower(sk[j]))
           {
               sk[j] = sk[j] - 32;
           }
       }
       sort(sk.begin(),sk.end());
       if(mp[sk] == 1)
       {
           vp.push_back(sp);
       }

   }
    sort(vp.begin(),vp.end());

    for(int i = 0;  i < vp.size(); i++)
    {
        cout<< vp[i] << endl;
    }


}
