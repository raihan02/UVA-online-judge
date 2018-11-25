#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll prime[260005], nPrime;
bool mark[5000006];
//int factor[30050];
ll ck;
ll arr[5000006];
ll freq[5000006];
ll brr[5000006];
void sieve(int n)
{
    int i, j, limit = sqrt(n * 1.) + 2;
    mark[1] = 1;
    for(int i = 4; i <= n; i += 2)
    {
        arr[i] += 2;
        mark[i] = 1;
    }
    //prime[nPrime++] = 2;

    for(i = 3; i <= n; i+=2)
    {
        if(mark[i] == 0)
        {
            arr[i] = i;

            //prime[nPrime++] = i;

            for(j = 2 * i; j <= n; j+= i)
            {
                mark[j] = 1;
               // cout<<j << " " < i< << endl;
                arr[j] += i;
            }


        }
    }
}
void fun()
{
    freq[0] = 0;
    ll cnt = 0;
    for(int i = 1; i <= 5000000; i++)
    {
        if(mark[arr[i]] == 0)
        {
            //cout<<i << " " << arr[i]<< endl;
            cnt++;

        }
       arr[i]=cnt;

    }


}
int main()
{
     //freopen("raju.txt", "w+", stdout);
    sieve(5000000);
    fun();
    ll a, b;

    while(cin >> a)
    {
        if(!a)
            break;


        cin >> b;
         if(a > b)
            swap(a,b);
        cout<< (arr[b] - arr[a - 1]) << endl;
    }
}

