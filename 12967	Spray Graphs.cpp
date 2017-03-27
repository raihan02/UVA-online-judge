#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll arr[31];
int main()
{
  arr[2] = 4;
  for(int i = 3; i <= 30; i++)
  {
      arr[i] = arr[i - 1] * 2 + 4;
  }
  int tes;
  cin >> tes;

  while(tes--)
  {
      int a;
      cin >> a;
      if(a == 1)
      {
          cout<< 1 << endl;
          continue;
      }
      cout<< arr[a] << endl;
  }

}
