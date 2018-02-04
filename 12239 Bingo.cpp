#include <bits/stdc++.h>
using namespace std;
int arr[10004];
int main()
{
   int n, m;
   while(cin >> n >> m)
   {
       if (n == 0 && m == 0)
        break;

      // set <int> st;
       int aarr[1005]={0};
       for(int i = 0; i < m; i++)
        cin >>arr[i];
        set <int> st;
        for(int i = 0; i < m; i++)
        {
            for(int j = i; j < m; j++)
            {
                st.insert(abs(arr[i] - arr[j]));
            }
        }
        set <int> :: iterator it;
         bool vs[100005] = {false};
        for(it = st.begin(); it != st.end(); it++)
            vs[*it] = true;

        bool f = false;
        for(int i = 0; i <= n; i++)
        {
            if(vs[i] == false)
            {

                f = true;
                break;
            }
        }
        if(!f)
            cout<<"Y";
        else
            cout<<"N";
        cout<< endl;
   }

}
