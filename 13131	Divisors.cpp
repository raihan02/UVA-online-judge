#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n, k;
    int tes;
    scanf("%d",&tes);
    while(tes--)
    {
        scanf("%lld %lld",&n,&k);
        vector <ll> vc;
        for(int i = 1; i <= sqrt(n); i++)
        {
            if(n % i == 0)
            {
                vc.push_back(i);

                if(i == n/i)
                    continue;
                vc.push_back(n/i);
            }
        }
         ll sum = 0;
        for(int i = 0; i < vc.size(); i++)
        {
            if(vc[i] % k == 0)
                continue;
            sum += vc[i];
        }
        printf("%lld\n",sum);
        vc.clear();
    }
}
