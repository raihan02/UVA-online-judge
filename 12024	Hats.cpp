#include <bits/stdc++.h>
using namespace std;
long long d[13], f[13];
int main()
{
    f[0] = 1;
    for(int i = 1; i <= 12; i++)
        f[i] = f[i - 1] * i;
    d[2] =1;
    d[3] = 2;
    for(int i = 4; i <= 12; i++)
        d[i] = (i -1)*(d[i -1] + d[i -2]);

    int n;
    int tes;
    cin >> tes;
    while(tes--)
    {
        cin >> n;
        cout<<d[n]<<"/"<<f[n]<< endl;
    }
}
