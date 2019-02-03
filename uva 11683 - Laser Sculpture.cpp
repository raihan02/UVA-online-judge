#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;

    while(cin >> a >> b)
    {
        if(a == 0 and b == 0) break;
        int arr[10004];
        memset(arr, 0, sizeof arr);
        for(int i = 0; i < b; i++) cin >> arr[i];
        int p = 0;
        p = a - arr[0];
        int res = 0;
        for(int i = 1; i < b; i++)
        {
            if(arr[i - 1] > arr[i] ) p += arr[i - 1] - arr[i];
        }
        cout<< p << endl;
    }

}
