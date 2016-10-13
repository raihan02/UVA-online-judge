/**
/// Raihan Chowdhury
/// International Islamic University Chittagong
/// Uva : raihan02
/// Codeforces: raihan022
/// Lightoj: Omar Faruk Apu
/// FaceBook : https://www.facebook.com/profile.php?id=100006579644699
/// Gmail: raihanraju02@gmail.com
**/
/**
   comment 
   uva 10653 - Bombs! NO they are Mines!!
   Strait forward bfs 2d grid
   
**/
#include<bits/stdc++.h>

using namespace std;

#define ll          long long int
#define sf          scanf
#define pf          printf
#define F           first
#define S           second
#define pb          push_back
#define GCD(a, b)   __gcd(a, b)
#define LCM(a, b)   ((a*b)/GCD(a, b))

#define MOD         1000000007
#define M           10000
#define deb(x) cerr << #x << " = " << x << endl;
template < typename F, typename S >
ostream& operator << ( ostream& os, const pair< F, S > & p )
{
    return os << "(" << p.first << ", " << p.second << ")";
}

template < typename T >
ostream &operator << ( ostream & os, const vector< T > &v )
{
    os << "{";
    typename vector< T > :: const_iterator it;
    for( it = v.begin(); it != v.end(); it++ )
    {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "}";
}

template < typename T >
ostream &operator << ( ostream & os, const set< T > &v )
{
    os << "[";
    typename set< T > :: const_iterator it;
    for ( it = v.begin(); it != v.end(); it++ )
    {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "]";
}

template < typename F, typename S >
ostream &operator << ( ostream & os, const map< F, S > &v )
{
    os << "[";
    typename map< F , S >::const_iterator it;
    for( it = v.begin(); it != v.end(); it++ )
    {
        if( it != v.begin() ) os << ", ";
        os << it -> first << " = " << it -> second ;
    }
    return os << "]";
}

#define inf 1<<30
#define deb(x) cerr << #x << " = " << x << endl;
typedef pair <int , int> pi;
template<class T>
inline bool fs(T &x)
{
    int c=getchar();
    int sgn=1;
    while(~c&&c<'0'||c>'9')
    {
        if(c=='-')sgn=-1;
        c=getchar();
    }
    for(x=0; ~c&&'0'<=c&&c<='9'; c=getchar())
        x=x*10+c-'0';
    x*=sgn;
    return ~c;
}
int arr[1005][1005];
int reach[1005][1005];
int fx[]= {0,-1, 0,1};
int fy[]= {1, 0,-1,0};
int r , c;
void setx()
{
    for(int i = 0; i < 1005; i++)
    {
        for(int j = 0; j < 1005; j++)
        {
            arr[i][j] = -1;
            reach[i][j] = -1;
        }
    }
}
void bfs(int i , int j)
{
   arr[i][j] = 0;
   queue <pi> q;
   q.push(make_pair(i ,j));
   while(!q.empty())
   {
       int x, y;
       x = q.front().F;
       y = q.front().S;
       q.pop();
       for(int i = 0; i < 4; i++)
       {
           int a , b;
           a = x + fx[i];
           b = y + fy[i];
          if(a >= 0 and  a < r and b >= 0 and b < c and arr[a][b] == -1)
          {

              arr[a][b] = arr[x][y] + 1;
              ///reach[a][b] = 1;
              q.push(make_pair(a,b));
          }
       }
   }
}
void print()
{
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
   while(fs(r) and fs(c) and r != 0 and c != 0)
   {
       setx();
       int cmp;
       fs(cmp);
       int p , q , y;
       for(int i = 0; i < cmp; i++)
       {
           fs(p);
           fs(q);
           for(int i = 0; i < q; i++)
           {
               fs(y);
               arr[p][y] = 99999;
           }
       }
       int src1 , src2;
       fs(src1);
       fs(src2);
       bfs(src1 , src2);
       int t1, t2;
       fs(t1);
       fs(t2);
       ///print();
       printf("%d\n", arr[t1][t2]);
   }
}
