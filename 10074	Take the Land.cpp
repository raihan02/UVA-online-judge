#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n,m;
    while(cin >> n >> m)
    {
        if(n == 0 && m == 0)
            break;
        int arr[100][100];
        for(int i = 0; i < n; i++)
        {
            for(int j =0 ; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
        int ans ,a =0, c ,d, mx =0;
        for(int i = 0; i < n; i++)
        {
            int brr[100] = {};

            for(int j = i; j < n; j++)
            {
                for(int k = 0; k < m; k++)
                {
                    brr[k] += !arr[j][k];



                    if(k == 0 || ans != c * d){
                        ans = 0;
                        c = 0;
                    }
                    c++;
                    d = j - i + 1;
                    ans += brr[k];
                    if(ans == c *d)
                    {
                        if(mx < ans)
                            mx = ans;
                    }
                }

            }
        }
        cout<<mx<< endl;
    }
}
