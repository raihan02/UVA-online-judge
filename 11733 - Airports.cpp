#include <bits/stdc++.h>
using namespace std;
struct node
{
    int u, v, w;
    node(int a, int b, int c)
    {
        u = a;
        v = b;
        w = c;
    }
    bool operator < (const node& p) const
    {
        return w < p.w;
    }
};
vector <node> edge;
int par[100001];
int find (int u)
{
    if(u != par[u])
        par[u] = find(par[u]);

    return par[u];
}
void krush_kal (int n, int m)
{
    sort(edge.begin(), edge.end());
    for(int i = 0; i <= n; i++)
    {
        par[i] = i;
    }
    int cnt = 0;
    int cost = 0;
    for(int i = 0; i < (int)edge.size(); i++)
    {
        int u, v;
        u = find(edge[i].u);
        v = find(edge[i].v);

        if(u != v)
        {
            cnt++;
            par[u] = v;
            cost += edge[i].w;
            if(cnt == n - 1)
                break;
        }
    }

   printf("%d %d\n", m * (n - cnt) + cost, n- cnt);
}
int main()
{
    int tes,o=0;
    cin >> tes;

    while(tes--)
    {
        o++;
        int n, m, css;

        cin >> n >> m >> css;

        for(int i = 0; i < m; i++)
        {
            int u, v, w;
            cin >> u >> v >> w;
            if(w < css)
            edge.push_back(node(u, v, w));
        }

        printf("Case #%d: ",o);
        krush_kal(n, css);
        edge.clear();

    }


}
