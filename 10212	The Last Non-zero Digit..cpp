#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll m, n;
    while(cin >> n >> m)
    {
          ll res =1;
        for(int i = 0; i < m; i++)
        {
            res = res * (n - i);
            while(res % 10 == 0)
            {
                res /= 10;
            }
            res = res % 100000000;
        }

        cout<<res % 10 << endl;
    }
}
