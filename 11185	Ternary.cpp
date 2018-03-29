#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n;

    while(cin >> n)
    {
        if(n < 0)
            break;
        vector<int> v;
        while(1)
        {
            v.push_back(n % 3);
            n/=3;
            if(n == 0)
                break;
        }
         reverse(v.begin(), v.end());
        for(int i = 0; i < v.size(); i++)
            cout<<v[i];
        cout<< endl;
    }
}
