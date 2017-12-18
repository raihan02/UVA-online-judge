#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tes;
    cin >> tes;

    while(tes--)
    {
        string s[1005];

        int n;
        cin >> n;
        map <string , string> mp;
        for(int i = 0; i < n; i++)
        {
            cin >> s[i];
            string sp = s[i];

            sort(sp.begin(), sp.end());
            mp[s[i]] = sp;
        }
        map <string, string > :: iterator it;
        string ss;
        while(cin >> ss)
        {
            if(ss == "END")
            {
                break;
            }
            string sk;
            sk = ss;
            cout<<"Anagrams for: " << ss << endl;
            sort(sk.begin(), sk.end());
             int p = 1;
             bool f = 0;
            for(int i = 0; i < n; i++)
            {
                if(sk == mp[s[i]])
                {
                    f = 1;
                     printf("  %d) ", p);
                    cout<<s[i] << endl;
                    p++;
                }
            }

            if(!f)
               cout<<"No anagrams for: "<<ss << endl;

        }
        if(tes)
            cout<< endl;

        mp.clear();
    }



}
