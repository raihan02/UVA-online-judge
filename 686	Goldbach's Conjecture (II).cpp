#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int prime[3000000] , nPrime;
int mark[10000002];
void sieve(int n)
{
    int i , j , limit = sqrt(n * 1.) + 2;
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
int main()
{
   int n;
   sieve(10000000); /// ami agei 10^7 porjnto sob prime ber kore rakhsi
   while(cin >> n && n)
   {
       int cnt = 0;
       //cout<<prime[0]<< endl;
       for(int i = 0; prime[i] <= n / 2; i++)
       {
           int x = prime[i];
           if(mark[n - x] == 0)
           {
               cnt++;
           }
       }
       printf("%d\n",cnt);
   }


}
