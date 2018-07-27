#include <bits/stdc++.h>
using namespace std;
bool visit[10000005] = {false};
int main()
{
    int tes;
    cin >> tes;
    while(tes--)
    {
        int n;
        cin >> n;
         int ans = 1;

         memset(visit, false, sizeof visit);
         visit[ans] = true;

            cout<<"0.";
         while(ans > 0)
         {
             int x = (ans * 10) / n;
            // cout<< ans << " " << x << endl;
             printf("%c", '0' + x);

             ans = (ans * 10) % n;
             if(visit[ans] == true)
                break;
             visit[ans] = true;
         }
         cout<< endl;
    }
}
