#include <bits/stdc++.h>
using namespace std;

int sortInversion(string s)
{
    int cnt = 0;

    for(int i = s.size() - 1; i >= 0; i--)
    {
        for(int j = 0; j < i; j++)
        {
            if(s[j] > s[j + 1])
            {
                cnt++;
                swap(s[j], s[j + 1]);
            }
        }
    }

    return cnt;
}
int main()
{
    int tes;
    cin >> tes;

    while(tes--)
    {
        int length, n;

        cin >> length >> n;
        vector <int> v;
        vector<string> vs;
        while(n--)
        {
            string s;
            cin >> s;
            int res = sortInversion(s);
            v.push_back(res);
            vs.push_back(s);
        }

        for(int i = v.size() - 1; i >= 0; i--)
        {
            for(int j = 0; j < i; j++)
            {
                if(v[j] > v[j + 1])
                {
                    swap(v[j], v[j + 1]);
                    swap(vs[j], vs[j + 1]);
                }
            }
        }

        for(int i = 0; i < vs.size(); i++)
        {
            cout<< vs[i] << endl;
        }

        if(tes)
            cout<< endl;

        v.clear();
        vs.clear();
    }
}
