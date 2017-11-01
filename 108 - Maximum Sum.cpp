/// O (n^3) solution 
/// Kadan 2D algorithm 
#include <bits/stdc++.h>
#define mx 1<<31
using namespace std;
int arr[101][101];
int brr[101];
 
int main()
{

    int n;

    while(cin >> n)
    {
        for(int i = 0; i < n; i++)
        {
            for(int j =0 ; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }
        int mxx = mx, mxxx;

        for(int i = 0; i < n; i++)
        {
            memset(brr, 0, sizeof brr);
            for(int j = i; j < n; j++)
            {
                int ans = 0 ,a = 0, b = 0, c = 0, d = 0, mxxx = mx;

                for(int k = 0; k < n; k++)
                {
                    brr[k] = brr[k] + arr[j][k];
                    ans += brr[k];
                    if(ans > mxxx)
                    {
                        mxxx= ans;

                    }
                    if(ans < 0)
                    {
                        ans = 0;
                    }
                }
                if(mxxx > mxx)
                mxx = mxxx;
            }

        }

        cout<<mxx<< endl;
    }

}
