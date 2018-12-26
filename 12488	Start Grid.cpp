#include <bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     while(cin >> n)
     {
         int arr[100],brr[100];
          int cnt = 0,i,j,k;
         for( i = 0; i < n; i++){cin >> arr[i];}
         for( j = 0; j < n; j++) {cin >> brr[j];}

         for( i = 0; i < n; i++){
            for( j = i; j < n; j++)
            {
                if(brr[i] == arr[j])
                {
                    break;
                }
            }
            for( k = j; k > i; k--)
            {
                arr[k] = arr[k -1];
                cnt++;
            }

         }
         cout<< cnt<< endl;
     }
}
