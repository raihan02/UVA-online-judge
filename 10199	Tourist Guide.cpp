#include <bits/stdc++.h>
using namespace std;
int dis[1000];
int low[1000];
bool visit[1000];
int parent[10000];
vector <int> node[1000];
set <string> st;
int timer;
map <string, int> mp;
map <int, string> pm;
void dfs(int u)
{
    dis[u] = low[u] = ++timer;
    visit[u] = true;
    int v;
    int children = 0;
    for(int i = 0; i < node[u].size(); i++)
    {
        v = node[u][i];
        if(!visit[v])
        {
            children++;
            parent[v] = u;
            dfs(v);
            /// if backedge is found

            low[u] = min(low[u], low[v]);

            /// special condition , if u is root  and u has many child , then u is AP
            if(parent[u] == -1 && children > 1)
                st.insert(pm[u]);
            /// if root has not many child

            if(parent[u] != -1 && low[v] >= dis[u])
                st.insert(pm[u]);
        }
        else if(v != parent[u])
            low[u] = min(low[u], dis[v]);
    }
}
int main()
{
    /*
    memset(parent, -1, sizeof parent);
    int n, e;
    cin >> n >> e;

    for(int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        node[a].push_back(b);
        node[b].push_back(a);
    }


    for(int i = 1; i <= n; i++)
    {
        if(visit[i] == false)
            dfs(i);
    }


    for(int i = 0; i < ap.size(); i++)
        cout<< ap[i] << " ";

    cout<< endl;*/
    int n,o=0;
    while(cin >> n && n)
    {


        memset(visit, false, sizeof visit);
        memset(low, 0, sizeof low);
        memset(dis, 0, sizeof dis);
        memset(parent, -1, sizeof parent);

        for(int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            mp[s] = i + 1;
            pm[i + 1] = s;
        }
        int e;
        cin >> e;
        for(int i = 0; i < e; i++)
        {
            string s1, s2;
            cin >> s1 >> s2;
            node[mp[s1]].push_back(mp[s2]);
            node[mp[s2]].push_back(mp[s1]);

        }
        timer = 0;
        for(int i = 1; i <= n; i++)
        {
            if(visit[i] == false)
            {
                dfs(i);
            }
        }

        set <string> :: iterator it;
        if(o)
            cout<< endl;

        printf("City map #%d: %d camera(s) found\n",++o, st.size());

        for(it = st.begin(); it != st.end(); it++)
        {
            cout<<*it <<endl;
        }

        st.clear();
        mp.clear();
        pm.clear();
        for(int i = 0; i <= n; i++)
        {
            node[i].clear();
        }
    }
}
