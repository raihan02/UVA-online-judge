
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
int arr[105];
void prime_factor (int n)
{
    ck = 0;
    for(int j = 2; j <= n; j++){
       int  v = j;
       //cout<< v << endl;
       ck=0;
    for(int i = 0; prime[i] <= sqrt(v); i++)
    {


        while(v % prime[i] == 0)
        {
            //cout<< "check" <<" " <<v << endl;
           factor[ck++] = prime[i];
            v = v / prime[i];
            arr[prime[i]]++;
        }
    }
    if(v > 1)
    {
        factor[ck++] = v;
        arr[v]++;
    }
    }
}
int main()
{
    sieve(1000000);
    int n;
    while(cin >> n)
    {
        if(n ==0)
            break;
        prime_factor(n);
        ck=0;
        printf("%3d! =",n);
        int cnt = 0;
       for(int i = 1; i <= 104; i++)
       {
           if(arr[i] >0)
           {
               if(cnt > 14){
                printf("\n      ");
                 cnt=0;
               }
             printf("%3d",arr[i]);
             cnt++;
           }
       }
       cout<< endl;
       memset(arr,0,sizeof arr);

    }
}
