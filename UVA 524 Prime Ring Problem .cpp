#include <bits/stdc++.h>
using namespace std;
int arr[20];
bool visited[100];
bool isPrime(int n)
{
    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}
void backTracking(int k, int n)
{

    if(k == n)
    {
        if(isPrime(arr[n - 1] + 1) == false)
        {
            return;
        }

        cout<< 1;
        for(int i = 1; i < k; i++)
        {
            cout<< " " << arr[i];
        }
        cout<< endl;

        return;
    }

    for(int i = 2; i <= n; i++)
    {
        if(visited[i] == true)
        {
            continue;
        }
        if(isPrime(i + arr[k - 1]))
        {
            visited[i] = true;

            arr[k] = i;
            backTracking(k + 1, n);
            visited[i] = false;
        }
    }
}

int main()
{
    int n;
    int o = 0;
    while(cin >> n)
    {
        if(o)
        {
            cout<< endl;
        }
        o++;
        printf("Case %d:\n",o);
        memset(arr, 0, sizeof arr);
        arr[0] = 1;
        backTracking(1,n);



    }

}
