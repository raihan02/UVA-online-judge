#include <bits/stdc++.h>
using namespace std;
int pri  (int n)
{
     int sq = sqrt(n);

     for(int i = 2; i <= sq; i++)
     {
         if(n % i == 0)
            return 0;
     }
     return 1;
}
int main()
{
    string s;

    while(cin >> s)
    {
        if(s == "0")
            break;
        string temp;
        vector <int> v;
        for(int i = 0;  i < s.size(); i++)
        {
           for(int j = i; s[j]; j++ )
           {
                if(j == i + 6)
                    break;
                temp += s[j];

               int ans = 0;

                for(int p = 0;  p < temp.size(); p++)
                {
                    ans = ans * 10 + temp[p] - '0';
                }
                if(pri(ans) == 1 && ans != 1 && ans != 0 && ans <= 100000)
                    v.push_back(ans);
           }
           temp.clear();

        }
        vector <int> :: iterator it;
        it = max_element(v.begin(), v.end());

        cout<<*it<< endl;

    }
    return 0;
}
