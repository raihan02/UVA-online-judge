#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int tes;
    cin >> tes;

    while(tes--)
    {
        ll n;
        cin >> n;
        ll ans = n + n * (n + 1);

        cout<< ans << endl;
    }
}
