#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int prime[3000000] , nPrime;
int mark[10000002];

bool pr (int n)
{
    if(n <= 3)
        return true;

    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}
int rev(int n)
{
    int res = 0;

    while(n > 0)
    {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}
int main()
{
    int n;
    //freopen("raju.txt","w+",stdout);
    while(cin >> n)
    {
       cout<< n  + n << endl;

       if(n == rev(n) && pr(n))
            break;
    }
}
