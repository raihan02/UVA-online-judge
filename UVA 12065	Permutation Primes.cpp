#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int prime[3000000], nPrime;
int mark[10000002];
void sieve(int n)
{
    int i, j, limit = sqrt(n * 1.) + 2;
    mark[1] = 1;
    for(int i = 4; i <= n; i += 2)
        mark[i] = 1;
    prime[nPrime++] = 2;

    for(i = 3; i <= n; i++)
    {
        if(!mark[i])
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

bool permuation (int n)
{
     char s[1004];
    sprintf(s, "%d", n);
    int len = strlen(s),x;
    sort(s, s+ len);

    do
    {
         x = 0;
        for(int i = 0; i < len; i++)
        {
            x = x * 10 + s[i] - '0';
        }

        if(x == n)
            continue;
        int ans = abs(x -n);
        int xx=  ans/9;
        if(ans % 9 == 0 && xx < 1111111)
        {
            if(mark[xx] == 0){
               // cout<< xx << endl;
                return true;
            }
        }
        //return true;

    }
    while(next_permutation(s, s + len));

    return false;
}
int main()
{
     sieve(1111111);
    //freopen("raju.txt","w+", stdout);
    int tes,o=0;
    cin >> tes;

    while(tes--)
    {
        o++;

        int l, r;
        cin >> l >> r;

        if(l > r)
            swap(l,r);
        int cnt = 0;
        for(int i = l; i <= r; i++)
        {
            if(permuation(i))
                cnt++;
        }

        printf("Case %d: %d\n",o,cnt);

    }
}
