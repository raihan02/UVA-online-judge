#include <bits/stdc++.h>
using namespace std;
char s[11] = {0};

void read (long n)
{
    sprintf(s, "%ld", n);
    //cout<< s<< endl;
}

long long  fun (string s)
{
    long long  ans = 0;
    for(int i = 0; i < s.size(); i++)
    {
        ans = ans * 10 + s[i] -48;
    }
    return ans;
}
int main()
{
    string s, temp;

    while(cin >> s)
    {
        sort(s.begin(), s.end());
        temp= s;
        if(temp[0] == '0')
        {
            for(int i = 1; i < temp.size(); i++)
            {
                if(temp[i]!= '0'){
                    swap(temp[0], temp[i]);

                 break;
                 }
            }
        }

        //cout<< temp << endl;

        reverse(s.begin(), s.end());

      long long x = fun(s);
      long long y = fun(temp);

      if(x < y)
        swap(x,y);
     // cout<<x << " " << y << endl;
        long long p = x -y;
        long long q = p/9;
      printf("%lld - %lld = %lld = 9 * %lld\n",x,y,p,q);
    }
}
