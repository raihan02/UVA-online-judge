#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    char s[1005];
    //cin >> s;
     int k;
    while(cin >> s >> k)
    {
        if(strcmp(s, "0") == 0 && k == 0)
            break;
        int n;
        if(s[0] == '0' && s[1] != 'x')
            sscanf(s, "%o" , &n);
        else if(s[0] == '0' && s[1] == 'x')
          sscanf(s, "%X" , &n);
        else
            sscanf(s, "%d" , &n);
        int ans = 0;
        for(int p = 0; p < k; p++)
        {
            string sp;
            int res;
            cin >> sp >> res;

            if(sp == "++i")
            {
                ++n;
                if(res == n)
                    ans++;
                if(res != n)
                    n = res;
            }
            if(sp == "i++")
            {

                if(res == n)
                    ans++;
                if(res != n)
                    n = res;
                n++;
            }
            if(sp == "--i")
            {
                --n;
                if(res == n)
                    ans++;
                if(res != n)
                    n = res;
            }
            if(sp == "i--")
            {

                if(res == n)
                    ans++;
                if(res != n)
                    n = res;
                 n--;
            }
            if(sp == "i")
            {

                if(res == n)
                    ans++;
                if(res != n)
                    n = res;
            }
        }
        cout<< ans << endl;

    }
}
