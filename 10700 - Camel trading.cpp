#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    string s;
     int tes;
     cin >> tes;
    while(tes--)
    {
        cin >> s;
        istringstream res(s);
        stack <ll> st;
         ll n;
         char ch;
          res >> n;
          string sp = s;
          st.push(n);
          ll mx = 0;
          while(res >> ch)
          {
              if(ch == '+')
              {
                  ll x = st.top();
                  st.pop();
                  res >> n;
                  st.push(n + x);
              }
              else
              {
                  res>> n;
                  st.push(n);
              }
          }
            mx = 1;
          while(st.size() > 0)
          {
              mx *=st.top();
              //cout<<st.top()<< endl;
              st.pop();
          }
          istringstream res1(sp);
          res1 >> n;
          st.push(n);

          while(res1 >> ch)
          {
              if(ch == '*')
              {
                  ll x = st.top();
                  st.pop();
                  res1 >> n;
                  st.push(x * n);
              }
              else
              {
                  res1 >> n;
                  st.push(n);
              }
          }
          ll mn = 0;
          while(st.size() > 0)
          {
              mn += st.top();
              st.pop();
          }

          printf("The maximum and minimum are %lld and %lld.\n",mx, mn);
    }
}
