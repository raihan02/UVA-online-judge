#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()

{
    int n;
     while(cin >> n)
     {
         int arr[n + 1] = {0};
         ll sum = 0;
         for(int i = 0; i < n; i++)
            cin >> arr[i], sum += arr[i];


            //cout<< sum << endl;
            if(sum% n > 0){
                cout<<-1<< endl;
              continue;
            }

        ll res=1;
        ll p = sum/n;
       // cout<<p << endl;
        for(int i =0; i < n; i++)
        {
            if(arr[i] < p)
                res += (p - arr[i]);
        }

        cout<< res << endl;

     }
}
