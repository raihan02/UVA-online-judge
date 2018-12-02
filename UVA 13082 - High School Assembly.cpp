#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tes,o=0;
    cin >> tes;

    while(tes--)
    {
        int n; cin >> n;
        int arr[n+1] = {0};

        for(int i = 0; i < n; i++)
            cin >> arr[i];

        int pos = 0,cnt = 0;

        for(int i = 0; i < n; i++)
            if(arr[i] == pos + 1)
        {
            pos++;
        }
        o++;
        printf("Case %d: %d\n", o, n-pos);
    }
}
