#include <bits/stdc++.h>
using namespace std;
struct A
{
   int a, d;
   string s;
}arr[11];
bool check (A x, A y)
{
    if(x.a != y.a)
        return x.a > y.a;
    else if(x.d != y.d)
        return x.d < y.d;
        else
            return x.s < y.s;
}
int main()
{
    int tes,o=0;
    cin >> tes;
    while(tes--)
    {
        o++;
        for(int i = 0; i < 10; i++)
        {
            cin >> arr[i].s >> arr[i].a >> arr[i].d;
        }
        sort(arr, arr + 10, check);
        vector <string> vs , vp;
         for(int i = 0; i < 5; i++)
            vs.push_back(arr[i].s);
         for(int i = 5; i < 10; i++)
            vp.push_back(arr[i].s);
       sort(vp.begin(), vp.end());
       sort(vs.begin(),vs.end());
       printf("Case %d:\n",o);
       cout<<"("<<vs[0]<<", " <<vs[1] <<", "<< vs[2] <<", " <<vs[3] <<", "<< vs[4]<<")"<< endl;
      cout<<"("<<vp[0]<<", " <<vp[1] <<", "<< vp[2] <<", " <<vp[3] <<", "<< vp[4]<<")"<< endl;
      vs.clear();
      vp.clear();

    }
}
