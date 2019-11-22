#include <bits/stdc++.h>
using namespace std;

int n, target;
int arr[21] = {0};

vector <int> v;

map < vector <int> , bool > mp;
vector <int> temp;
int mx = 0;
void backTracking (int it, int k, int sum)
{
    if(sum <= target)
    {
        if(mp[v] == true)
        {
            return;
        }

        mp[v] = true;
        int sum = 0;
        for(int i = 0; i < k; i++)
        {
            sum += v[i];
        }

        if(mx < sum)
        {
            mx = sum;
            temp.clear();
           // cout<< sum << endl;
            for(int i = 0; i < k; i++)
            {
                temp.push_back(v[i]);
            }
        }

        //cout<< endl;
    }

    if( it == n or sum > target)
    {
        return;
    }

    for (int i = it; i < n; i++)
    {
        v.push_back(arr[i]);
        backTracking(i + 1, k + 1, sum + arr[i]);
        v.pop_back();
    }

}
int main()
{
    while(cin>> target >> n)
    {
        memset(arr, 0, sizeof arr);

        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        mx =0;
        backTracking(0,0,0);
        int sum = 0;
        for(int i = 0; i < temp.size(); i++)
        {
            cout<< temp[i] << " ";
            sum += temp[i];
        }
        printf("sum:%d\n", sum);
        mp.clear();
        v.clear();
       // temp.clear();

    }
}
