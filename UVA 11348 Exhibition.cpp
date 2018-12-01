#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("raju.txt","w+", stdout);


    int tes;
    cin >> tes;
    int o = 0;
    while(tes--)
    {
        map <int, int> mp;
    set <int> st[10005];
        int n;
        cin >> n;
         //int o =0;
         o++;
        for(int i = 1; i <= n; i++)
        {

            int x;

            int y;
            cin >> y;

            while(y--){
             cin >> x;
            if(mp.count(x) == 0)
                mp[x] = 1;
            else if(st[i].find(x) == st[i].end())
                mp[x] = mp[x] + 1;
                st[i].insert(x);
            }

        }
           map <int, int> :: iterator m;
           int cnt1 =0 , cnt2 = 0;
           for(m = mp.begin(); m != mp.end(); m++)
           {
               if(m ->second == 1)
                cnt1++;
           }

        printf("Case %d:",o);
        for(int i =  1; i <= n; i++)
        {
            int cnt = 0;
            set <int> ::iterator it;
            for(it = st[i].begin(); it != st[i].end(); it++)
            {
                if(mp[*it] == 1)
                    cnt++;
            }

            if(cnt1 == 0)
                printf(" %.6lf%%", 100.0/n);
            else
                printf(" %.6lf%%", cnt* 100.0/ cnt1);

          //st[i].clear();
        }
        //mp.clear();
        cout<< endl;


    }
}
