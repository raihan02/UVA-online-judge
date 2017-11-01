#include <bits/stdc++.h>
using namespace std;
int arr[100005];
int sum[100005];
int main()
{
    int n,o =0;
    while(cin >> n)
    {
        o++;
        if(n == 0)
            break;
       for(int i = 0 ; i < n; i++)
       {
           cin >> arr[i];
       }

       sort(arr, arr + n);
       vector <int> vs;
       vector < pair <int, int> > vs1;
       for(int i = 0 ;i < n; i++)
       {
           for(int j = i + 1; j < n; j++)
           {
               vs.push_back(arr[i] + arr[j]);
           }
       }
       int q;

       cin >> q;
         //printf("Case %d:\n",o);
       while(q--)
       {
           int x;
           cin >> x;
           int ans= 0 , mn = 999999999, res= 0;
           for(int i = 0; i < vs.size(); i++)
           {
               ans = vs[i] - x;
               if(ans < 0)
                ans = ans * (-1);
              if(mn > ans)
              {
                  mn = ans;
                  res= vs[i];
              }
              // cout<< ans << endl;
           }
           vs1.push_back(make_pair(x, res));

       }
       printf("Case %d:\n",o);

       for(int i = 0; i < vs1.size(); i++)
        printf("Closest sum to %d is %d.\n",vs1[i].first,vs1[i].second);
       vs.clear();
       vs1.clear();

    }
}
