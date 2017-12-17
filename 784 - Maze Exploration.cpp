#include <bits/stdc++.h>
using namespace std;
char ch[105][105];
void dfs_flood (int x, int y)
{
    if(ch[x][y] == 'X' || ch[x][y] == '#')
        return;
    ch[x][y] = '#';
    dfs_flood(x + 1,y);
    dfs_flood(x - 1, y);
    dfs_flood(x, y + 1);
    dfs_flood(x,y - 1);
}
int main()
{
    int tes;
    cin >> tes;
    getchar();
    while(tes--)
    {
        int cnt = 0;
        while(gets(ch[cnt]))
        {
            if(ch[cnt][0] == '_')
                break;
            cnt++;
        }

        for(int i = 0; i < cnt; i++)
        {
            for(int j = 0; ch[i][j]; j++)
            {
                if(ch[i][j] == '*')
                {
                    dfs_flood(i, j);
                }
            }

        }

        for(int i = 0; i <= cnt; i++)
            puts(ch[i]);

    }
}
