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
int cnt = 0;
void dfs (int x, int y, char ch)
{
    cnt++;
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
    while(cin >> row >> col)
    {
        if(row==0 && col ==0)
            break;
        o++;
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                cin >> maze[i][j];
            }
        }
        memset(r, 0, sizeof r);
        vector <pair < int, char > > vc;
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(r[i][j] == 0)
                {
                    if(isupper(maze[i][j]))
                    {
                        char ch = maze[i][j];
                        cnt = 0;
                        dfs(i, j, ch);

                        vc.push_back(make_pair(cnt, ch));
                    }
                }
            }
        }

        sort(vc.begin(), vc.end(), comp);

        printf("Problem %d:\n", o);
        for(int i = 0; i < vc.size(); i++)
        {
            printf("%c %d\n", vc[i].second, vc[i].first);
        }
        vc.clear();


    }
}
