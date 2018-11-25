#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    while(cin >> n)
    {
        c++;
        if(!n)
            break;
        vector <pair <int, int> > v;
        for(int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            v.push_back(make_pair(y,x));
        }
        sort(v.begin(), v.end());
        reverse(v.begin(),v.end());
         int sum = 0, mx = 0;
        for(int i = 0; i < v.size(); i++)
        {
           sum += v[i].second;

           mx = max(mx, sum + v[i].first);
        }

        printf("Case %d: %d\n",c,mx);
        v.clear();
    }
}
