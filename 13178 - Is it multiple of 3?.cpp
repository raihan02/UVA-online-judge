#include <bits/stdc++.h>
using namespace std;
int main()
{

    int tes;
    cin >> tes;

    while(tes--)
    {
        unsigned long long n, ans;
        cin >> n;
        ans = n + 1;
        ans = (n * ans)/2;

        //cout<< ans << endl;
        if(ans % 3 == 0)
        {
            cout<<"YES"<< endl;
        }
        else
        {
            cout<<"NO"<< endl;
        }
    }
}
