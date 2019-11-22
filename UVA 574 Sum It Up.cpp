#include <bits/stdc++.h>
using namespace std;
int n, target;
map < vector <int> , bool > mp;
vector <int> v;
int arr[21];
void backTracking(int it, int k, int sum)
{
    if(sum == target)
    {
        if(mp[v] == true)
        {
            return;
        }
        mp[v] = true;

        for(int i = 0; i < k; i++)
        {
            if(i == k - 1)
            {
                cout<< v[i];
            }
            else{
                  cout<< v[i] << "+";
            }

        }

        cout<< endl;

    }


    if(it == n or sum > target)
    {
        return;
    }
    for(int i = it; i < n; i++)
    {
        v.push_back(arr[i]);

        backTracking(i + 1, k + 1, sum + arr[i]);

        v.pop_back();
    }

}
int main()
{

   while(cin >> target >> n)
   {
       if(target == 0 && n == 0)
       {
           break;
       }

       for(int i = 0; i < n; i++)
       {
           cin >> arr[i];
       }
       printf("Sums of %d:\n", target);
      backTracking(0,0,0);
      if(mp.size() == 0)
      {
          cout<<"NONE"<< endl;
      }
      mp.clear();
      v.clear();
   }
}
