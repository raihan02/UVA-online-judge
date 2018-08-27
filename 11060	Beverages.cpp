#include <bits/stdc++.h>
using namespace std;
vector <int> node[10005];
bool visited[10005];
vector <int> st;
int in[10005];
int main()
{
    int n,o=0;
    while(cin >> n)
    {
        //o++;
        memset(in,0,sizeof in);
        map <string, int> mp;
        map <int, string> mm;
        for(int i = 1; i <= n; i++)
        {
            string s;
            cin >> s;
            mp[s] = i;
            mm[i] = s;

        }
        int e;
        cin >> e;
        for(int i = 0; i < e; i++)
        {
            string s1,s2;
            cin >>s1 >> s2;
            node[mp[s1]].push_back(mp[s2]);
            in[mp[s2]]++;
        }



        priority_queue<int, vector<int>, greater<int> > q;
        for(int i = 1; i <= n; i++)
        {
            if(in[i] == 0)
                q.push(i);

        }
        while(!q.empty())
        {
            int u = q.top();
            st.push_back(u);
            q.pop();
            for(int i = 0; i < node[u].size(); i++)
            {
                int v = node[u][i];
                in[v]--;
                if(in[v] == 0)
                {
                    q.push(v);
                }
            }
        }
         printf("Case #%d: Dilbert should drink beverages in this order: ", ++o);
        for(int i = 0; i < st.size()-1; i ++)
        {
           cout<<mm[st[i]]<< " ";
        }
          int p= st[st.size()-1];
         cout<< mm[p]<< "."<<endl<<endl;

         for(int i = 0; i <= n; i++)
            node[i].clear();
            st.clear();


    }
}
