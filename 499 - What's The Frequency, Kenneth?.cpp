#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;

    while(getline(cin , s))
    {
        int cnt = 0;
        map <char, int> mp;

        map <char, int> :: iterator it;
        mp.clear();
        for(int i = 0; i < s.size(); i++)
        {
            if(isalpha(s[i]))
            {
                if(mp.count(s[i]) == 0)
                    mp[s[i]] =1;
                else
                    mp[s[i]] = mp[s[i]] + 1;
            }
        }
         int mx = 0;
        for(it = mp.begin(); it != mp.end(); it++)
        {
            //cout<<it->first << " " << it->second << endl;
           mx = max(mx, it->second);
        }
        vector<char> vc;
       for(it = mp.begin(); it != mp.end(); it++)
        {
            //cout<<it->first << " " << it->second << endl;
           if(mx == it->second)
           {
               vc.push_back(it->first);
           }
        }

        sort(vc.begin(), vc.end());

        for(int i = 0; i < vc.size(); i++)
            cout<<vc[i];
        cout<< " " << mx << endl;
        vc.clear();
        mp.clear();
    }
}
