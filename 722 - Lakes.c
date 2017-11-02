#include <stdio.h>
#include <string.h>
char s[105][105];

int row , col, cnt = 0;
int fx[]={+1,-1,+0,+0};
int fy[]={+0,+0,+1,-1};
int r[101][101];
void dfs (int x, int y)
{
    r[x][y] = 1;
    cnt++;
    int i;
    for( i = 0; i < 4; i++)
    {
        int a, b;
        a = x + fx[i];
        b = y + fy[i];

        if( a >= 0 && a < row && b >= 0 && b < col && r[a][b] == 0)
        {
            r[a][b] = 1;
            if(s[a][b] == '0')
            {
                dfs(a , b);
            }
        }
    }
}

int main()
{
    int tes;
    scanf("%d", &tes);
    int tc = 0;
    while(tes--)
    {
        if(tc)
            printf("\n");


        tc = 1;
        int a, b;
        scanf("%d %d", &a, &b);

        row = 0;
         memset(r, 0, sizeof r);
         char ss[1000];
         gets(ss);
        while(gets(s[row]) && s[row][0])
        {

            row++;
        }

        col = strlen(s[row - 1]);
         cnt = 0;
        dfs(a -1, b - 1);
          printf("%d\n", cnt);

    }
    return 0;
}
