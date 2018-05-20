#include <bits/stdc++.h>
using namespace std;
int mat[101][101];
int mat2[101][101];
void make_matrix (int x1, int y1, int x2, int y2)
{
    for(int i = x1; i <= x2; i++)
    {
       for(int j = y1; j <= y2; j++)
       {
           mat[i][j] = 1;
       }
    }


}
void print (int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int n;
    int tes;
    cin >> tes;

    while(tes--)
    {
        int n;
        cin >> n;
        memset(mat,0,sizeof mat);
        int k;
        cin >> k;
        while(k--)
        {
            int a, b, c, d;

            cin >> a >> b >> c>> d;
            make_matrix(a,b,c,d);
        }
        //print(n);
        int ans ,a =0, c ,d, mx =0;
        for(int i = 1; i <= n; i++)
        {
            int brr[101] = {};

            for(int j = i; j <= n; j++)
            {
                for(int k = 1; k <= n; k++)
                {
                    brr[k] += !mat[j][k];



                    if(k == 1 || ans != c * d){
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
        cout<< mx<< endl;
    }
}
