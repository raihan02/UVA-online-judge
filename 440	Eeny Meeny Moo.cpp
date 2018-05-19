#include <bits/stdc++.h>
using namespace std;
bool visited[151];
int fun (int n, int m)
{
    for(int i = 1; i <= n; i++)
    {
        visited[i] = true;
    }
    visited[1] = false;
    int k = 1;
    int cnt =0;
    int ans = 0, t =1;
    while(1)
    {
        bool flag = 0;
       for(int i = 1; i <= n; i++)
       {
           if(visited[i] == true)
            cnt++;
           if(cnt == m)
           {
               visited[i] = false;
               cnt = 0;
               t++;
               ans = i;
           }
           if(t == n)
           {
               flag = true;
               break;
           }
       }
      //
    //cout<<ans << " ";
       if(flag)
        break;
        k++;
    }
    return ans;
}

int main()
{
    int n;

    while(cin >> n)
    {
        if(n ==0)
            break;
        int i = 2;
     while(1)
     {
         if(fun(n, i) == 2)
         {
             cout<<i<< endl;
             break;
         }
         i++;
     }
    }
}
