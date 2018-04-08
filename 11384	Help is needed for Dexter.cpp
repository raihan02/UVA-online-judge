#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{

  ll n;
  while(cin >> n)
  {
      ll res =0;
      while(n)
      {
          res++;
          n /= 2;
      }
      cout<< res << endl;
  }

}
