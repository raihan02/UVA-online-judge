#include <stdio.h>

int arr[100][100];
int main()
{
    int n,o =0;

    while(scanf("%d", &n) == 1)
    {
        if(!n)
            break;
        o++;
        int i, j;
         for( i = 1; i <= n; i++)
         {
             for( j = 1; j <= n; j++)
             {
                 scanf("%d", &arr[i][j]);
             }
         }
         int cnt = 0,nn;
         if(n % 2 == 1)
            nn = n / 2 + 1;
            else
            nn =  n/ 2;
         int pp ,np, x;
         i = 1, x = n;
          int brr[100005] = {0};
         while(1)
         {
            if(cnt == nn)
                break;

            pp = i, np = x;
            
            int sum = 0;
            while(pp <= np)
            {
                sum += arr[i][pp];
                arr[i][pp] =0;
                sum += arr[pp][i];

                arr[pp][i] = 0;
                sum += arr[x][pp];
                arr[x][pp] = 0;
                sum +=arr[pp][x];
                arr[pp][x] = 0;
                pp++;
            }

            brr[cnt] = sum;
           cnt++;
           i++;
           x--;


         }
         printf("Case %d: ",o);

         for(i = 0; i < cnt -1; i++)
            printf("%d ", brr[i]);
         printf("%d\n", brr[cnt - 1]);
    }

}
