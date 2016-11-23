#include <bits/stdc++.h>
using namespace std;
int parent[50005] , ran[50005] , find_group[50005];
typedef long long int ll;
ll sum[50005];
int arr[50005];
void built (int n)
{
    for(int i = 0; i < n; i++)
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
void make_union(int a , int b)
{
    if(ran[a] > ran[b])
    {
        parent[b] = a;
        arr[a] += arr[b];

    }
    else
    {
        parent[a] = b ;
        arr[b] += arr[a];
        if(ran[a] == ran[b])
            ran[b]++ ;
    }
}
int main()
{

    int tes;
    cin >> tes;
    while(tes--)
    {
        int n , m;
        cin >> n >> m;
        memset(arr, 0, sizeof arr);
        memset(find_group , 0 ,sizeof find_group);
        built(n);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for(int i = 0; i < m; i++)
        {
            int a, b;
            cin >> a >> b;
            int pa , pb;
            pa = make_friend(a);
            pb = make_friend(b);
            if(pa != pb)
                make_union(pa, pb);
        }
        int f = true;
        for(int i = 0; i < n; i++)
        {

            int x= make_friend(i);
            if(arr[x] != 0)
            {
                f = false;
                break;
            }
        }
        if(f)
            printf("POSSIBLE\n");
        else
            printf("IMPOSSIBLE\n");


    }

}
