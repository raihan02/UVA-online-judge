#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<int> v;

const ll target = 2147483648;
map <ll, int> ls;
void modiFy(ll n)
{
    ll a, b;
    for(int i = 2; i <= n; i++)
    {
        a = i, b = i;
        int cnt = 1 ;
        int mx = 0;
        while(a * b <= target)
        {
            a *= b;
            cnt++;
            if(ls.find(a) == ls.end())
            {
                ls[a] = cnt;
            }
            else
            {
                if(ls[a] < cnt)
                {
                    ls[a] = cnt;
                }
            }
        }
    }
}

int main()
{
    //freopen("prob.txt", "w+", stdout);
    modiFy(47000);
    ll n;
    while(cin >> n && n)
    {
        ll t = n, res;
        if(n < 0)
        {
            n = n * -1;
        }
        res = ls[n];
        if(res == 0)
        {
            cout<< 1 <<endl;
            continue;
        }
        if(t < 0)
        {
            while(res % 2 ==0)
            {
                res = res / 2;
            }
        }
        cout<< res << endl;

    }

}
