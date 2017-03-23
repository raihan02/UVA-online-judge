#include <bits/stdc++.h>
using namespace std;
int fx[]= {+1,-1,+0,+0};
int fy[]= {+0,+0,+1,-1};
char maze[101][101];
int r[101][101];
char s[100][1001];
void dfs (int x, int y, char ch)
{
    r[x][y] = 1;
    s[x][y] =ch;
    for(int i = 0; i < 4; i++)
    {
        int a, b;
        a = x + fx[i];
        b = y + fy[i];
        if(s[a][b] != 'X' && r[a][b] == 0)
        {
            r[a][b] = 1;
            dfs(a,b, ch);
        }

    }
}
int main()
{
    
    while(1)
    {
        int x = 0;
        while(1)
        {
            if(!gets(s[x]))
                return 0;
            if(s[x][0] == '_')
                break;
            x++;
        }
           memset(r,0,sizeof r);
        for(int i = 0; i < x; i++)
        {
            for(int j = 0; j < strlen(s[i]); j++)
            {
                if(s[i][j] != 'X' && s[i][j] != ' ')
                {
                    char c = s[i][j];
                    if(r[i][j] != 1)

                        dfs(i, j, c);
                }
            }

        }
        for(int i = 0; i < x; i++)
            puts(s[i]);
        puts("_____________________________");
    }
    return 0;
}
