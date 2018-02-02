#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tes;
    cin >> tes;

    while(tes--y)
    {
        int n, q;
        cin >> n >> q;
       int arr[230] = {0};
        while(n--)
        {
            long x;
            cin >> x;
            int mx = 0;
            for(int i = 1; i <= 230; i++)
            {
                if(mx < i &x)
                {
                    arr[i] =  i & x;
                    mx = i & x;
                }
            }
        }
        while(q--)
        {
            int p;
            cin >> p;
            cout<< arr[p] << endl;
        }
    }
}
