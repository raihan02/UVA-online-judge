#include <bits/stdc++.h>
using namespace std;
int arr[1005];
int main()
{
    int n;
    int tes;
    cin >> tes;
    while(tes--)
    {
        cin >> n;
        set <int> st;
        memset(arr, 0, sizeof arr);
        vector <int> v[1000];
        for(int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            v[1].push_back(arr[i]);
        }
        int p = 1;
        //set <int > st;
        int check = 0;
        while(1)
        {
            //cout<<"Check" << endl;

            if(p == 1001)
            {
                break;
            }
             int q = arr[1];

            for(int i = 1; i <= n - 1; i ++)
            {
                arr[i] = abs(arr[i] - arr[ i + 1]);
            }
            arr[n] = abs(arr[n] - q);

            for(int i = 1; i <= n; i++)
                st.insert(arr[i]);

             if(st.size() == 1)
             {
                 cout<< "ZERO" << endl;
                 check = 1;
                 break;
             }
             st.clear();
           p++;
        }
        if(check == 0)
            cout<<"LOOP"<< endl;

    }



}
