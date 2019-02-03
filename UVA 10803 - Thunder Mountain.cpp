#include <bits/stdc++.h>
using namespace std;
double arr[805][805];
double a[805], b[805];
void floyd  (int n)
{
    for(int k = 0; k < n; k++)
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                arr[i][j] = min(arr[i][j], arr[i][k] + arr[k][j]);
            }
        }
    }
}
void init (int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j =0; j < n; j++)
        {
            arr[i][j] = 99999999.00;
        }
    }
}
int main()
{
    int tes,o=0;
    cin >> tes;
    while(tes--)
    {
        o++;
        int n;
        cin >> n;
        for(int i = 0; i < n; i++)
            cin >> a[i] >> b[i];
        init(n);
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                double x = sqrt(((a[i] - a[j])* (a[i] - a[j])) + ((b[i] - b[j])* (b[i] - b[j])));

                if(x <= 10.0)
                    arr[i][j] = x;
            }
        }
         /*
           for(int i =0; i < n; i++)
           {
               for(int j =0; j < n; j++)
               {
                   printf("%.2lf ", arr[i][j]);
               }
               cout<< endl;
           }
           */
        floyd(n);
        double ans =0.00;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                ans = max(ans, arr[i][j]);
            }
        }
        printf("Case #%d:\n",o);
        if(ans == 99999999.00)
            printf("Send Kurdy\n");
            else
        printf("%.4lf\n", ans);

        cout<< endl;

    }
}
