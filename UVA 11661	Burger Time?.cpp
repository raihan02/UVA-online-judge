#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin >> n)
    {
        vector<int> v1, v2;

        if(!n)
            break;

        string s;
        cin >> s;
        bool f =0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'Z'){
                f = 1 ; break;}
            if(s[i] == 'R')
                v1.push_back(i);
            if(s[i] == 'D')
                v2.push_back(i);
        }
        if(f){
            cout<<0<< endl;
           continue;
         }
         int mn = 9999999999;
         if(v1.size() > 0 && v2.size() > 0)
         {
             for(int i = 0; i < v1.size(); i++)
             {
                 for(int j = 0; j < v2.size(); j++)
                 {
                     int x = abs(v1[i] - v2[j]);
                      mn = min(x, mn);
                 }
             }
             cout<< mn << endl;
         }
         else
         {
             cout<<0<< endl;
         }


    }
}
