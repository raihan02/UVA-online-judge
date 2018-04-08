#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    char s[1005];
    //cin >> s;
    int k;
    cin >> k;
    while(k--)
    {
        ll a, b, c, d;
        a =0,b=1,c=1,d= 0;

        string s;
        cin >> s;
        ll x, y;
        x = a + b, y = c + d;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'R')
            {
                a = x;
                c = y;
            }
            else
            {
                b = x;
                d = y;
            }
            x = a + b;
            y = c + d;
        }

        printf("%lld/%lld\n",x,y);


    }

}

