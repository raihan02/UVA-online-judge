#include <bits/stdc++.h>
using namespace std;
int mat[105][105];
int arr[10005];
void fun()
{
    for(int i = 0; i <= 105; i++)
    {
        for(int j = 0; j <= 105; j++)
        {
            mat[i][j] = 99999999;
        }
    }
}

void f (int n)
{
    for(int k = 1; k <= n; k++)
    {
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                if(mat[i][j] > mat[i][k] + mat[k][j])
                {
                    mat[i][j] = mat[i][k] + mat[k][j];
                }
            }
        }
    }
}

int main()
{
    int n;
    while(cin >> n)
    {
        if(n == 0)
            break;
            fun();
        int x,y;
        while(cin >> x)
        {
            if(x == 0)
                break;
             while(cin >> y)
             {
                 if(y == 0)
                    break;
                 mat[x][y] = 1;
             }

        }
         f(n);

         int q;
         cin >> q;
          vector <int> v;
         while(q--)
         {
              int p;
              cin >> p;

              int cnt = 0;
              for(int i = 1; i <= n; i++)
              {
                  if(mat[p][i] == 99999999)
                  {
                      cnt++;
                      v.push_back(i);
                  }
              }
              cout<< cnt;

              for(int i = 0; i < v.size(); i++)
                cout<<" " << v[i];
              cout<< endl;
              v.clear();

         }

    }

}
