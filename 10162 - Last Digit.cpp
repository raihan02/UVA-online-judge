#include <bits/stdc++.h>
using namespace std;
int arr[10005];
typedef long long int ll;

void store ()
{

     int res =0;
    for(int i = 1; i <= 1000; i++)
    {
        ll sum =1;
        for(int j = 1; j <= i; j++)
        {
            sum = (sum * i) % 10;
        }
        res = (res + sum) % 10;
        arr[i] = res % 10;
    }
}

int main()
{
    string s;
    store();
    while(cin >> s)
    {
        if(s == "0")
            break;
        int x = 0;
        for(int i = 0;  i < s.length(); i++)
        {
            x = (x * 10 + s[i] - '0') % 100;
        }

        cout<<arr[x] << endl;

    }
}
