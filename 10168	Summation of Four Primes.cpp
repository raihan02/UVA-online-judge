#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int prime[3000000] , nPrime;
int mark[10000002];
void sieve(int n)
{
    int i , j , limit = sqrt(n * 1.) + 2;
    mark[1] = 1;
    //mark[0]=1;
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
   sieve(10000005);
   //cout <<nPrime << endl;
   ll n;
   //cout<< mark[3] << endl;
   while(cin  >> n)
   {
       if(n <= 7)
       {
           printf("Impossible.\n");
           continue;
       }
       ll p , q, r;
       if(n % 2 == 0)
       {
           printf("%d %d ", 2, 2);
           p = n - 4;
       }
       else
       {
           p = n - 5;
           printf("%d %d ",2,3);
       }


       for(int i = 0; prime[i] <= p/2; i++)
       {
           ll x = prime[i];
           ll y = p - x;

           //cout<< x << " " << y << "Check " << mark[y] <<  endl;

           if(mark[y] == 0)
           {
               printf("%lld %lld\n", x,y);
               break;
           }
       }
   }


}
