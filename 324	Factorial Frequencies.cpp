#include <bits/stdc++.h>
using namespace std;
int f[367][785];
int arr[10];
void fun()
{
    f[0][0] = 1;
    f[1][0] = 1;

    for(int i = 2; i < 367; i++)
    {
        for(int j = 0; j < 785; j++)
        {
            f[i][j] = f[i][j] + f[i - 1][j] * i;
            if(f[i][j] > 9)
            {
                f[i][j + 1] = f[i][j] / 10;
                f[i][j] %= 10;
            }
        }
    }

}
int main()
{
   fun();
   int n;
   while(cin >> n)
   {
       int cnt;
        printf("%d! --\n",n);
       for(cnt = 785 - 1; cnt >= 0; cnt--)
       {
           if(f[n][cnt] != 0)
            break;
       }

       for(int i = cnt; i >= 0; i--)
       {
           arr[f[n][i]]++;
       }

       printf("   (0)%5d   (1)%5d   (2)%5d   (3)%5d   (4)%5d\n", arr[0], arr[1],arr[2],arr[3],arr[4]);
       printf("   (5)%5d   (6)%5d   (7)%5d   (8)%5d   (9)%5d\n",arr[5], arr[6],arr[7],arr[8],arr[9]);
       memset(arr, 0,sizeof arr);

   }


}
