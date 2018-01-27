#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll arr[105][105];
int main()
{
    int tes,o=0;
    string sp, s,k,t;
    cin >> tes;
    char c1,c2;
    int n;
    while(tes--)
    {
        cin >> c1 >> c2 >> n;

         o++;
         bool f = false;
         for(int i = 0; i < n; i++)
         {
             for(int j = 0; j < n; j++)
             {
                 cin >> arr[i][j];
             }
         }

         for(int i = 0; i < n; i++)
         {
             for(int j = 0; j < n; j++)
             {
                 if(arr[i][j] < 0 || arr[i][j] != arr[n - 1 -i][n - 1 - j])
                    f = true;
             }
         }

         if(!f)
            printf("Test #%d: Symmetric.\n",o);
         else
           printf("Test #%d: Non-symmetric.\n",o);




    }
}
