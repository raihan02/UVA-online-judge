#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int prime[3000000] , nPrime;
int mark[10000002];
int factor[300];
int ck;
void sieve(int n)
{
    int i , j , limit = sqrt(n * 1.) + 2;
    mark[1] = 1;
    for(int i = 4; i <= n; i += 2)
        mark[i] = 1;
    prime[nPrime++] = 2;

    for(i = 3; i <= n; i++)
    {
        if(mark[i] == 0)
        {
            prime[nPrime++] = i;
            if(i <= limit)
            {
                for(j = i * i; j <= n; j+= i * 2)
                {
                    mark[j] = 1;
                }
            }
        }
    }
}
void prime_factor (int n)
{
    ck = 0;
    int x = n;
    for(int i = 0; prime[i] <= sqrt(n); i++)
    {
        while(n % prime[i] == 0)
        {
           factor[ck++] = prime[i];
            n = n / prime[i];
        }
    }
    if(n > 1)
    {
        factor[ck++] = n;
    }

    if(n == x)
    {
        factor[ck++] = 1;
    }
}
int main()
{
    sieve(10000000);
    int n,o=0;
    while(cin >> n)
    {
        o++;
        if(n == 0)
            break;
            if(n == 1)
            {
               printf("Case %d: 2\n",o);
                continue;
            }


        prime_factor(n);
        //ll sum = 0;
        map <int, int> mp;
        map <int,int> :: iterator it;
        set <int> st;
        for(int i =0; i < ck; i++)
        {
           int x = factor[i];
           st.insert(x);
           if(mp.count(x) == 0)
                mp[x] = x;
           else
            mp[x] = mp[x] * x;
        }
        ll sum = 0;
         printf("Case %d: ",o);
        for(it = mp.begin(); it != mp.end(); it++)
        {
            //cout<<it->first << " " << it->second << endl;
            sum += it->second;
        }
           if(st.size() == 1)
        cout<< sum +1<< endl;
        else
            cout<< sum << endl;
        mp.clear();
        st.clear();
    }
}
