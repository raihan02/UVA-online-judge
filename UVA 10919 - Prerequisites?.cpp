#include <bits/stdc++.h>
using namespace std;
int main()
{
    int course, cat;
    while(cin >> course)
    {
        if(course == 0)
         break;
        cin >> cat;
        map <string, int> mp;
        for(int i = 0; i < course; i++)
        {
           string s;
           cin >> s;
           mp[s] = i;
        }

        int c, r;
        int cnt = 0;
        bool check = false;
        for(int i = 0; i < cat; i++)
        {
            cin >> c >> r;
            int cc = 0;
            for(int i = 0; i < c; i++)
            {
                string s;
                cin >> s;
                if(mp.find(s) != mp.end())
                {
                    cc++;
                }
            }
            if(cc < r)
                check= true;
        }
        if(check)
            cout<< "no"<< endl;
        else
            cout<<"yes"<< endl;
        mp.clear();
    }
}
