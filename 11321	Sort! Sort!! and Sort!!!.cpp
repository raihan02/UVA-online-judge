#include <bits/stdc++.h>
using namespace std;
int mod;
bool cmp (int a, int b)
{
    if(a %mod != b % mod)
        return a % mod < b % mod;
    else
    {
        if(abs(a) % 2 == 0 && abs(b) % 2 == 0)
            return a < b;
        else if(abs(a) % 2 != 0 && abs(b) % 2 != 0)
            return a > b;
        else if(abs(a) % 2 != 0)
            return true;
            else
                return false;
        

    }
}
int main()
{

    int n;
    while(cin >> n >> mod)
    {
        cout<<n << " " << mod << endl;
        if(n == 0 && mod == 0)
            break;

        vector <int> vc;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            vc.push_back(x);
        }
        sort(vc.begin(), vc.end(),cmp);
        
        for(int i = 0; i < vc.size(); i++)
        {
            cout<< vc[i] << endl;
        }
        vc.clear();
    }
}
