#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tes,o=0;
    cin >> tes;
    while(tes--)
    {
        o++;
        string s;
        cin >> s;

        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'B')
            {
                if(s[i - 1] == '-')
                    s[i - 1] = '0';
                if(s[i - 2] == '-')
                {
                    s[i - 2] = '0';
                }
            }
            else if(s[i] == 'S')
            {
                if(s[i - 1] == '-')
                    s[i - 1] = '0';
                if(s[i + 1]  == '-')
                    s[i + 1] = '0';
            }
        }
        // cout<<s<< endl;
        int cnt = count(s.begin(), s.end(), '-');

        printf("Case %d: %d\n", o, cnt);

    }
}
