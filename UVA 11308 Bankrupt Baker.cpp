#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("raju.txt","w+",stdout);

    string s1, s2, in, re;
    int tes;
    cin >> tes;

    getchar();
    while(tes--)
    {
        getline(cin, s1);
        for(int i = 0; i < s1.size(); i++)
            if(islower(s1[i]))
                s1[i] = s1[i] - 32;
        cout<< s1 << endl;
        int m,n, b;
        cin >> m >> n >> b;
        int x;
        map <string, int> mp;
        for(int i = 0; i < m; i++)
        {
            cin >> in >> x;
            mp[in] = x;
        }
        getchar();
        vector <pair <int, string> > v;
        while(n--)
        {
            getline(cin, s2);
            int p, ans=0;
            cin >> p;
            while(p--)
            {
                int y;
                cin >> re >> y;
                cin.ignore();
                ans += mp[re] * y;
            }
            if(ans<=b)
           v.push_back(make_pair(ans, s2));
        }
        if(v.size()==0)
            cout<<"Too expensive!"<<endl;
        else{
            sort(v.begin(),v.end());
            for(int i=0;i<v.size();i++)
                cout<<v[i].second<<endl;
        }
        cout<<endl;
        v.clear();
        mp.clear();
    }
}
