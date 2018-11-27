#include <bits/stdc++.h>
#define pb push_back
using namespace std;
vector <int> node[10005];
int  dist[10005];
int arr[10005];
void bfs (int src)
{
    int mx = 0, temp, sum = 0, c= 0, flag = 0;
    dist[src] = 0;
    queue <int> q;
    q.push(src);
    //vector<int> v;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        flag = 0;
        mx = 0;
        for(int i = 0; i < node[u].size(); i++)
        {
            int v = node[u][i];
            if(dist[v] == -1 && arr[v] > mx)
            {
                flag = 1;
                temp = v;
                mx= arr[v];
                //v.push_back(arr[v]);
            }

        }

        if(flag == 0)
        {
            break;
        }
        q.push(temp);
        dist[temp] = dist[u] + 1;
        sum += arr[temp];
        c=temp;


    }

    cout<< sum << " " << c << endl;
}

int main()
{
    //freopen("raju.txt", "w+", stdout);
    int tes,o=0;

    cin >> tes;

    while(tes--)
    {
        o++;

        int n, e;

        cin >> n >> e;

        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        memset(dist,-1,sizeof dist);

        while(e--)
        {
            int a, b;
            cin >> a >> b;

            node[a].push_back(b);
        }
            printf("Case %d: ",o);
        bfs(0);

        for(int i=0;i <=n; i++)
            node[i].clear();
    }

}
/*
1
6 5
0 8 9 2 7 5
5 4
5 3
1 5
0 1
0 2
*/
