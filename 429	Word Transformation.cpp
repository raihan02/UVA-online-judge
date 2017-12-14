#include <bits/stdc++.h>
using namespace std;
vector <int> node[205];
int dist[1001];
bool visit[1001];
map <string, int> mp;
bool cmp (string s1, string s2)
{
    if(s1.size() == s2.size())
    {
        int cnt = 0;
        for(int i = 0; i < s1.size(); i++)
        {
            if(s1[i] != s2[i])
                cnt++;
        }

        if(cnt == 1)
            return true;

    }
    return false;
}
void bfs (int src, int des)
{
    //cout<< src << " " << des << endl;
    //visit[src] = true;
    queue <int> q;
    q.push(src);

    while(q.size())
    {
        //cout<<"Check" << endl;
        //q.pop();

        int u = q.front();
        //cout<<u<< endl;
        q.pop();
        if(u == des)
        {
            break;
        }
        int v;
        for(int i = 0; i < node[u].size(); i++)
        {
            v = node[u][i];

            if(visit[v] == false)
            {
                visit[v] = true;
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }

    cout<< dist[des] << endl;
}
void init()
{
    for(int i = 0; i <= 205; i++)
    {
        node[i].clear();
        visit[i] = 0;
        dist[i] = 0;
    }
    mp.clear();
}
int main()
{
    int tes;

    cin >> tes;
     string ss[1001];
     bool ff = false;
    while(tes--)
    {
         init();
        int in = 0;
        string s;
        while(cin >> s)
        {
            if(s == "*")
                break;
            ss[in] = s;
            mp[s] = in;

            in++;
        }
        if(ff)
            cout<< endl;
         ff = true;
      /*
       cout<<in<< endl;
       map <string, int > :: iterator it;

       for(it = mp.begin(); it != mp.end(); it++)
       {
           cout<<it->first << " " << it->second << endl;
       }*/


       for(int i = 0; i < in; i++)
       {
           for(int j = 0; j < in; j++)
           {
               if(i == j)
                continue;
              if(cmp(ss[i], ss[j]) == true)
              {
                  node[i].push_back(j);
                  node[j].push_back(i);
              }
           }
       }
       /*

       for(int i = 0; i < in; i++)
       {
           cout<<i << ": ";
           for(int j = 0; j < node[i].size(); j++)
           {
               cout<< node[i][j] << " ";
           }
           cout<< endl;
       }*/
       stringstream sp;
       string ab,x,y;
      getchar();
       while(getline(cin, ab))
       {
           if(!ab.size())
             break;
             memset(dist, 0, sizeof dist);
             memset(visit, false , sizeof visit);

             sp.clear();
           sp << ab;
           sp >> x;
           sp >> y;

          // bfs(mp[x], mp[y]);

           cout<<x << " " << y << " ";
           bfs(mp[x], mp[y]);

       }

    }
}
