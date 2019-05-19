#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair <int, int> ii;
int prime[3000000], nPrime;
int mark[10000002];
int factor[300];
int ck;
map <int, bool> mp;
void sieve(int n)
{
    int i, j, limit = sqrt(n * 1.) + 2;
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

int bfs (int s, int t)
{
    queue <ii> q;
    q.push(make_pair(s, 0));

    while(!q.empty())
    {
        int v = q.front().first;
        int w = q.front().second;
        q.pop();
        if(v == t)
        {
            return w;
        }
        if(mp[v] == 1)
            continue;
        mp[v] = 1;
        ck = 0;
        prime_factor(v);
        //cout<< ck << endl;
        int sum = 0;
        for(int i = 0; i < ck; i++)
        {
            sum = v + factor[i];

            if(sum <= t && v != factor[i])
            {
                q.push(make_pair(sum, w+1));
            }
        }
    }
    return -1;
}
int main()
{
    int s, t,o=0;
    sieve(10005);

    while(cin >> s >> t)
    {
        o++;
        //ck = 0;
        if(s == 0 && t == 0)
        {
            break;
        }
        int ans =   bfs(s,t);
       printf("Case %d: %d\n",o, ans);
        mp.clear();
    }
}
