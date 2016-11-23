#include <bits/stdc++.h>
using namespace std;
int par[50001] , ran[50001];
void built (int n)
{
    for(int i = 1; i <= n; i++)
    {
        ran[i] = 0;
        par[i] = i;
    }
}
int make_friend (int n)
{
    if(par[n] == n)
        return n;
    else
        return par[n] = make_friend(par[n]);
}
void Union(int a , int b)
{
    if(ran[a] > ran[b])
    {
        par[b] = a;
    }
    else
    {
        par[a] = b;
        if(ran[a] == ran[b])
            ran[b]++;
    }
}
int main()
{
    int  n , m, o = 0;
    while(scanf("%d %d", &n , &m))
    {

        o++;
        if(m == 0  && n == 0)
            break;
        built(n);
        while(m --)
        {
            int a, b;
            cin >> a >> b;
            int pa , pb;
            pa = make_friend(a);
            pb = make_friend(b);
            if(pa != pb)
                Union(pa, pb);
        }
         int cnt = 0;
        set <int> st;
        for(int i = 1; i <= n; i++)
        {
            int x = make_friend(i);
            st.insert(x);
        }
        printf("Case %d: %d\n",o, st.size());
        st.clear();


    }
}
