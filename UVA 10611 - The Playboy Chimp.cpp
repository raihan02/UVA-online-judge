#include <bits/stdc++.h>
using namespace std;
int arr[250005];
int main()
{
    int n;
    while(cin >> n)
    {
        memset(arr, -1,sizeof arr);

        for(int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr,arr+n);
        int q;
        cin >> q;
        while(q--)
        {
            int x;
            cin >> x;
            int u_b = upper_bound(arr, arr + n, x) - arr;
            int l_b = lower_bound(arr, arr + n, x) - arr;

            int l,u;
            l = l_b-1;
            u = u_b;

            //cout<<u_b << " " << l_b << endl;

            if(l == -1&& arr[u] == -1)
            {
                cout<< "X X" << endl;
            }
            else if(l == -1  && arr[u] != -1)
            {
                cout<<"X " << arr[u] << endl;
            }
            else if(l != -1 && arr[u] == -1)
            {
                cout<< arr[l] << " " << "X" << endl;
            }
            else
            {
                cout<< arr[l] << " " << arr[u] << endl;
            }
        }

    }
}
