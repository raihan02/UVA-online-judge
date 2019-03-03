#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int prime[3000000] , nPrime;
int mark[10000002];
int factor[300];
int ck;
int mu[1000007], M[1000007];
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
}
int main()
{
    sieve(1000006);
    mu[1] =1;
    M[1] = 1;
    for(int i = 2; i <= 1000000; i++)
    {
         ck = 0;
        prime_factor(i);
        map <int, int> mp;
        for(int j = 0; j < ck; j++)
        {
            if(mp.count(factor[j]) == 0)
                mp[factor[j]] = 1;
            else
                mp[factor[j]] = mp[factor[j]] + 1;
        }
        map <int,int> :: iterator it;

        bool flag  = 0;

        for(it = mp.begin(); it != mp.end(); it++)
        {
            if(it->second != 1)
            {
                flag = 1;
                break;
            }
        }
        if(!flag)
        {
            if(ck % 2 == 0)
                mu[i] =1;
            else
                mu[i] = -1;
        }
        else
            mu[i] = 0;
        M[i] = M[i-1] + mu[i];
    }

    int n;
    while(cin >> n)
    {
        if(n == 0)
            break;
        //cout<< n << " " << mu[n] << " " <<M[n] << endl;
        printf("%8d%8d%8d\n",n,mu[n],M[n]);
    }

}
