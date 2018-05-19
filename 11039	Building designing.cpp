#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tes;
    cin >> tes;
    while(tes--)
    {
        int x , y;
        cin >> x;
        vector <int> vc, vk, vl;
        vector <int> :: iterator it, it1;
        int p = 0, q = 0;
        for(int i = 0; i < x; i++)
        {
            cin >> y;
            if(y == 0)
                continue;
            if(y < 0)
            {
                p++;
                vc.push_back(-1 * y);
            }
            else
            {
                q++;
                vk.push_back(y);
            }

        }
        sort(vc.begin(), vc.end());
        sort(vk.begin(), vk.end());
        int g,  k;
        g = vc[0], k = vk[0];
        map <int, int> mp;
        for(int i = 0; i < vc.size(); i++)
        {
            mp[vc[i]] = 1;
        }
        for(int i = 0; i < vk.size(); i++)
        {
            mp[vk[i]] = -1;
        }
        vector <int> v(vk.size() + vc.size());
        merge(vk.begin(), vk.end(), vc.begin(), vc.end(), v.begin());
        int c = 0;
        for(int i = 0; i < v.size(); i++)
        {
            if(mp[v[i]] == 1)
            {
                if(mp[v[i + 1]] == -1)
                    c++;
            }
            if(mp[v[i]] == -1)
            {
                if(mp[v[i + 1]] == 1)
                    c++;
            }
        }


        printf("%d\n",c + 1);


    }
}
