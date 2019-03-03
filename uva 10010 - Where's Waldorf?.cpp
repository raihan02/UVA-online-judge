#include <bits/stdc++.h>
using namespace std;
int fa[] = {+0,1,-1,0,1,+1,-1,-1};
int fb[] = {-1,0,+0,-1,+1,-1,1,-1};
int r, c;
 static int dir[][2] = {{0,1},{1,0},{-1,0},{0,-1},
                        {1,1},{1,-1},{-1,1},{-1,-1}};

char maze[55][55];
void fun (string s)
{
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {

            for(int k = 0; k < 8; k++)
            {
                int a = i, b = j;
                int p = 0;
                while(maze[a][b] == s[p])
                {
                    a += dir[k][0];
                    b += dir[k][1];

                    p++;

                    if(p == s.size())
                    {
                        cout<< i + 1 << " " << j + 1 << endl;

                        return;
                    }
                    if(a < 0 || b < 0 || a >= r || b >= c)
                        break;


                }



            }


        }

    }
}
int main()
{
    int tes;
    cin >> tes;

    while(tes--)
    {
        cin >> r >> c;

        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                cin >> maze[i][j];

                if(isupper(maze[i][j]))
                {
                    maze[i][j]= maze[i][j] + 32;
                }
            }
        }
        int q;
        cin >> q;
        while(q--)
        {
            string s;
            cin >> s;

            for(int i = 0; i < s.size(); i++)
            {
                if(isupper(s[i]))
                {
                    s[i] = s[i] + 32;
                }
            }
            bool flag =0;
            fun(s);


        }

        if(tes)
            cout<< endl;
    }
}
/*
1
8 11
abcDEFGhigg
hEbkWalDork
FtbAwaldORm
FtsimrLqsrc
bboArBeDebv
Klcbqwikomk
strEBGadhrb
bUiqlacnBjf
4
*/

