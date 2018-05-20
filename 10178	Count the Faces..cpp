#include <bits/stdc++.h>
using namespace std;
char parent[257];
int ran[257] , find_group[1005];
void built ()
{
    for(int i = 0; i <= 256; i++)
    {
        parent[i] = i;
       ran[i] = 0;
    }
}
int make_friend (char n)
{
    if(parent[n] == n)
        return n;
    else
        return parent[n] = make_friend(parent[n]);
}
int cnt;
void make_union(char a , char b)
{
            char pa = make_friend(a);
            char pb = make_friend(b);
     a = pa;
     b = pb;

     if(a == b)
     {
         cnt++;
         return;
     }
     if(ran[a] > ran[b])
    {
       parent[b] = a  ;
    }
    else
    {
       parent[a] = b ;
        if(ran[a] == ran[b])
            ran[b]++ ;
    }
}
int main()
{
    int m , n;
    while(cin >> n >> m)
   {
     built();
     cnt = 1;
     for(int i = 0 ; i < m; i++)
        {
            char a, b;
            cin>>a>>b;
            make_union(a,b);

        }

        cout<< cnt << endl;
   }
}
