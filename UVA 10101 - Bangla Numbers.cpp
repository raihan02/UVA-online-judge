#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
string taka[5] = {"kuti", "lakh",  "hajar", "shata"};
ll arr[5] = {10000000, 100000, 1000, 100};

void func (ll n)
{
    for(int i = 0; i < 4; i++)
    {
        if(n >= arr[i])
        {
            func(n / arr[i]);
            cout<< " " << taka[i];
            n = n % arr[i];
        }
    }
    if(n > 0){
    cout<< " " <<n ;
    }
}
int main()
{


    ll n;
    int o= 0;
    while(cin >> n)
    {
        ll keep  = n;

        o++;

        printf("%4d.", o);

        if(n == 0)
        {
            cout<<" 0";
        }
        func(n);
        cout<< endl;
    }
}
