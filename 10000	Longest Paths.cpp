#include <bits/stdc++.h>
using namespace std;
#define mem(x,y) memset(x, y, sizeof(x))
#define inf -1
#define pb push_back
#define fin(prob) freopen("prob.in", "r", stdin)
#define fout(prob) freopen("prob.out", "w", stdout)
#define si(a) int a; scanf("%d", &a);
#define sll(a) ll a; scanf("%lld", &a);
#define sllu(a) unsigned ll a; scanf("%llu", &a);
#define sd(a) double a; scanf("%lf", &a);
#define deb(x) cerr<< #x <<"="<<x<<endl;
const double pi=2*acos(0);
typedef string st;
typedef vector <int> vi;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef long long ll;
typedef vector < pair <int, int> > vii;
typedef priority_queue<int,vector<int>,greater<int> > min_heap;
bool pali(string temp, int i, int j)
{
    if(i>=j) return true;
    if(temp[i]==temp[j]) return pali(temp, i+1, j-1);
    return false;
}
template <class T> inline T gcd(T a, T b)
{
    if(a<0) return gcd(-a, b);
    if(b<0) return gcd(a,-b);
    return (b==0) ? a : gcd(b, a%b);
}
template <typename F, typename S> ostream &operator << (ostream & os, const map<F,S>&v)
{
    os<<"[";
    typename map<F,S>::const_iterator it;

    for(it=v.begin(); it!=v.end(); it++)
    {
        if(it != v.begin()) os<<",";
        os<< it ->first<<"="<<it->second;
    }
    return os<<"]";
}
int arr[101][101];
void build ()
{
    for(int i = 1; i <= 101; i++)
    {
        for(int j = 1; j <= 101; j++)
        {
            if(i == j)
                arr[i][j] = 0;
            arr[i][j] = inf;
        }
    }
}
void floyd(int n)
{
    for(int k = 1;k <= n; k++)
    {
        for(int i = 1; i <= n; i++)
        {
            if(arr[i][k] != -1){
            for(int j = 1; j <= n; j++)
            {
                if(arr[k][j] != -1)
                arr[i][j] = max(arr[i][j], arr[i][k] + arr[k][j]);
            }
            }
        }
    }
}
int main()
{
       int n, o =0;
       while (cin  >> n )
       {
           build();
           o++;
           if(n == 0)
            break;
           int point;
           cin >> point;
           int u,v;
           while(cin >> u >> v)
           {
               if(u == 0 && v == 0)
                break;
                arr[u][v] = 1;

           }
           floyd(n);
           int l = 0, x;
           for(int i = 1; i <= n; i++)
           {
               if(l < arr[point][i])
               {
                   l = arr[point][i];
                   x = i;
               }
           }
           printf("Case %d: The longest path from %d has length %d, finishing at %d.\n\n",o,point, l, x);
       }
}
