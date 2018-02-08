#include <bits/stdc++.h>
using namespace std;
vector <int> node[1005];
int k;
int dfs (int u, int par)
{
   // cout<<u << " " << par << endl;
    if(node[u].size() == 1 && u != 1)
    {
        return 1;
    }

    int ans = 1, v;
     vector <int> vc;
    for(int i = 0; i < node[u].size(); i++)
    {
        v = node[u][i];
        if(v == par)
            continue;
        vc.push_back(dfs(v,u));
    }

    if(vc.size() < k)
        return ans;
    sort(vc.begin(), vc.end(), greater <int> ());

    for(int i = 0; i < k; i++)
        ans += vc[i];

    return ans;
}
int main()
{
    int tes, o=0;
    cin >> tes;

    while(tes--)
    {
        o++;
        int n;
        cin >> n >> k;

        for(int i = 0; i < n - 1; i++)
        {
            int a, b;
            cin >> a >> b;
            node[a].push_back(b);
            node[b].push_back(a);
        }

        int x = dfs(1, -1);
        printf("Case %d: %d\n", o, x);
        for(int i = 0; i <= n; i++)
            node[i].clear();
    }
}
