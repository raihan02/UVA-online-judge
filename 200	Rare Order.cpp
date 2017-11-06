#include <bits/stdc++.h>
using namespace std;
bool visit[122];
int main()
{
    string s;
    vector <string> vs;
    while(cin >> s)
    {
        if(s == "#")
            break;
        vs.push_back(s);
    }
    int mx = -1;
    for(int i = 0; i < vs.size(); i++)
    {
       // cout<< vs[i] << endl;
        int p = vs[i].size();
        if(p > mx)
        {
            mx = p;//vs[i].size();
        }
    }
    //cout<< mx << endl;
    for(int i = 0; i < mx; i++)
    {
        for(int j = 0; j < vs.size(); j++)
        {
           char ch = vs[j][i];
           if(ch >= 65 && ch <= 90)
           {
               int flag = 0;
               for(int i = 0; i < vs.size(); i++)
               {
                   for(int j = 0; j < vs[i].size(); j++)
                   {
                       if(ch == vs[i][j])
                       {
                           flag = 1;
                           break;
                       }
                   }
               }
               if(!visit[ch] && flag)
                printf("%c", ch);
               visit[ch] = 1;
           }


        }
        //cout<< endl;
    }
    cout<< endl;
    memset(visit, 0, sizeof visit);


}
