#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,c, o = 0;

    while(cin >> n >> m >> c)
    {
        o++;
        if(!n and !m and !c)
            break;
        int arr[10005] = {0};
        bool f[1005] = {0};

        for(int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            f[i] = false;
        }
        int mx= 0, res = 0;
        bool check = false;
        for(int i = 1; i <= m; i++)
        {
            int x;
            cin >> x;
            if(f[x] == false)
            {
                res += arr[x];
                f[x] = !f[x];
            }
            else
            {
                res -= arr[x];
                f[x] = !f[x];
            }

            if(res > c)
            {
                check = true;
            }
            else
                mx = max(mx, res);
        }
        printf("Sequence %d\n",o);
        if(check)
        {
            printf("Fuse was blown.\n\n");
        }
        else
        {
            printf("Fuse was not blown.\nMaximal power consumption was %d amperes.\n\n", mx);
        }
    }
}
