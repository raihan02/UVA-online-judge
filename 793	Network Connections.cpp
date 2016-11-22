#include <bits/stdc++.h>
using namespace std;
int parent[1005], ran[1005], find_group[1005];
void built (int n)
{
    for(int i = 1; i <= n; i++)
    {
        parent[i] = i;
        ran[i] = 0;
    }
}

int make_friend (int n)
{
    if(parent[n] == n) return n;
    else return parent[n] = make_friend(parent[n]);
}
void make_union(int a, int b)
{
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
    int tes, o = 0;
    cin >> tes;
    while(tes--)
    {
        o++;
        int n;
        cin >> n;
        getchar();
        built(n);
        string s;
        int ans1 = 0, ans2 = 0;
        while(1)
        {

            if(!getline(cin, s) or s.empty())
                break;
            char c;
            int a, b;
            sscanf(s.c_str(), " %c  %d %d", &c, &a, &b);
            int pa = make_friend(a);
            int pb = make_friend(b);
            if(c == 'c')
                parent[pa] = parent[pb];
            else
            {
                if(pa == pb)
                    ans1++;
                else
                    ans2++;
            }
        }

        printf("%d,%d\n", ans1, ans2);
        if(tes)
            printf("\n");
    }
}
