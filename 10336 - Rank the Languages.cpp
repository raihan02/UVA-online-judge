#include <bits/stdc++.h>
using namespace std;
//int fx[] = {+0,+0,+1,-1,-1,+1,-1,+1}; /// move up down && corner /// If we want only move in up and down , thne
//int fy[] = {-1,+1,+0,+0,+1,+1,-1,-1}; /// UVA problem samle (Oil deposite )
int row, col;

//for up down right left
int fx[]= {+1,-1,+0,+0};
int fy[]= {+0,+0,+1,-1};
//*/

bool comp(pair<int,char> a, pair<int,char> b)
{
    if(a.first!= b.first)return a.first>b.first;
    else return a.second<b.second;
}
char maze[101][101];
int r[101][101];

void dfs (int x, int y, char ch)
{

    r[x][y] = 1;

    for(int i = 0; i < 4; i++)
    {
        int a, b;
        a = x + fx[i];
        b = y + fy[i];

        if( a >= 0 && a < row && b >= 0 && b < col && r[a][b] == 0 && isalpha(maze[a][b]))
        {
            // r[a][b] = 1;
            if(maze[a][b] == ch)
            {
                dfs(a, b, ch);
            }
        }
    }
}
int main()
{
    int o=0;
    int tes;
    cin >> tes;
    while(tes--){
    cin >> row >> col;

        if(row==0 && col ==0)
            break;
        o++;
        set <char > st;
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                cin >> maze[i][j];
               st.insert(maze[i][j]);
            }
        }
        memset(r, 0, sizeof r);
        int cnt = 0;
        vector <pair <int, char > > vc;
        set <char>:: iterator it;

        for(it = st.begin(); it != st.end(); it++)
        {
            char ch = *it;
            int cnt = 0;
            for(int i = 0; i < row; i++)
            {
                for(int j = 0; j < col; j++)
                {
                    if(r[i][j] == 0)
                    {
                        if(ch == maze[i][j])
                        {
                            dfs(i, j, ch);
                            cnt++;
                        }
                    }
                }
            }

            vc.push_back(make_pair(cnt, ch));
        }

     sort(vc.begin(),vc.end(), comp);

     printf("World #%d\n",o);

     for(int i = 0; i < vc.size(); i++)
     {
         printf("%c: %d\n", vc[i].second, vc[i].first);
     }
     vc.clear();
     st.clear();
    }
}
