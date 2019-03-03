#include <bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("aaa.txt","r+",stdin);
    int n;
    map <int, int> mp,mp1;

    for(int i = 1; i <= 100; i++)
    {
        mp[i] = i *i *i;
        mp1[i *i * i] = i;
    }
    while(cin >> n)
    {
        bool f = 0;
        if(n == 0)
            break;
            int i,j;
        for( i = 1; i <= sqrt(n); i++)
        {
            for(j = 1; j <= i; j++)
            {
                int x = (i*i*i) - (j *j * j);
                 if(x == n)
                 {
                     f = 1;
                     break;
                 }
            }
            if(f)
                break;
        }
        if(!f)
            printf("No solution\n");
            else
                cout<<i << " " <<j << endl;
    }
}
