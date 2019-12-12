#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
string s;
ll n;
ll reminder (char ch)
{
    ll res = 0;
    for(int i =0; i < s.size(); i++)
    {
        res = res * 10 + s[i] - 48;

        res = res % n;
    }

    return res;
}
void divide (char ch)
{
    ll res = 0;
    bool flag = false;
    for(int i = 0; i < s.size(); i++)
    {
        res = res * 10 + s[i] - 48;
       // cout << res << endl;
        if(res / n != 0)
        {
            flag = true;
        }
        if(flag)
        {
            cout<< res / n;
        }
        res = res % n;
    }
    if(!flag)
    {
       cout<<0;
    }
    cout<< endl;
}
int main()
{
  char ch;

  while(cin >> s >> ch >> n)
  {
      if(ch == '/')
      {
          divide(ch);
      }
      else
      {
          ll res = reminder(ch);

          cout<< res << endl;
      }
  }
}
