#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll arr[12] = {5, 10 , 20 , 50, 100, 200 , 500, 1000, 2000,5000,10000};
ll pos[30010];

int main()
{

    pos[0] = 1;
    for(int i = 0; i < 11; i++)
    {
        for(int j = arr[i]; j <= 30010; j++)
        {
            pos[j] += pos[j - arr[i]];
        }
    }
    string s;
    while(cin >> s)
    {
        if(s == "0.00")
            break;
        ll num = 0;
        int c= 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '.')
                break;
            num = num * 10 + s[i] - '0';
            c++;
        }
       ll num1 = 0;
       for(int i = c + 1; i < s.length(); i++)
       {
           num1 = num1 * 10 + s[i] - '0';
       }
       ll x = num;
       num = num * 100 + num1;
       printf("%3lld.%.2lld%17ld\n",x,num1,pos[num]);
    }
}
