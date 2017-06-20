
#include <bits/stdc++.h>
using namespace std;

const int mx = 20005;
vector <int> g[mx]; 
vector <int> r[mx];
vector <int> top;
bool visit[mx];
int comp[mx];
int inDegree[mx];
vector <int> p[mx];
void init (int n)
{
    for(int i = 0; i < n; i++)
    {
        g[i].clear();
        r[i].clear();
    }
    memset(visit,  false, sizeof visit);
    top.clear();
    memset(comp, 0, sizeof comp);
}
void dfs1(int u)
{
    visit[u] = true;
    for(int i = 0; i < g[u].size(); i++)
    {
        int v = g[u][i];
        if(visit[v] == false)
            dfs1(v);
    }
    top.push_back(u);
}
void dfs2(int u, int c)
{
    visit[u] = true;
    comp[u] = c;

    for(int i = 0; i < r[u].size(); i++)
    {
        int v = r[u][i];
        if(visit[v] == false)
        {
            dfs2(v, c);
        }
    }
}
int main()
{
    int n, e;
    while(cin >> n >> e)
    {
        init(n);
        if(n == 0 && e == 0)
            break;
        for(int i = 0; i < e; i++)
        {
            int a, b, c;
            cin >> a >>b >> c;
            a--;
            b--;
            if(c == 2)
            {
                g[a].push_back(b);
                g[b].push_back(a);
                r[b].push_back(a);
                r[a].push_back(b);
            }
            else
            {
                g[a].push_back(b);
                r[b].push_back(a);
            }

        }

        for(int i = 0; i < n; i++)
        {
            if(visit[i] == false)
                dfs1(i);
        }
        for(int i = 0 ;  i <= n; i++)
        {
            visit[i] = 0;
        }
        int cId = 0;
        /// component
        for(int i = top.size() - 1; i >= 0; i--)
        {
            if(visit[top[i]] == false)
            {
                dfs2(top[i], ++cId);
            }
        }
          set <int> st;
        for(int i = 0; i < n; i++)
        {
           st.insert(comp[i]);
        }
        if(st.size() == 1)
            printf("1\n");
        else
            printf("0\n");
        st.clear();
    }
}
