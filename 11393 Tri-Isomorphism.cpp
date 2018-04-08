#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    while(cin >> n)
    {
        if(!n)
            break;
            if(n == 1 || n == 2)
            {
                cout <<"NO"<< endl;
                continue;
            }
            if(n == 3)
            {
                cout<<"YES"<< endl;
                continue;
            }
        int ans = 0;
        ans = (n * (n - 1)) / 2;
        if(ans % 3 == 0 )
            cout<<"YES"<< endl;
        else
            cout<<"NO"<< endl;
    }
}
