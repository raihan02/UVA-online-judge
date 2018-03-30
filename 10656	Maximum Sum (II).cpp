#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    while(cin >> n)
    {
        if(n == 0)
            break;
        vector <int> v;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if(x > 0)
                v.push_back(x);
        }
        if(v.size() == 0)
        {
            cout<< 0<< endl;
            continue;
        }
        for(int i = 0; i < v.size()-1; i++)
        {
            cout<< v[i]  << " ";
        }
        cout<< v[v.size() - 1]<< endl;
        v.clear();

    }
    return 0;
}
