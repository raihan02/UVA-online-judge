#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll arr[5845];
void fun()
{
    arr[1] = 1;
    int a = 1, b = 1, c = 1, d =1;

    for(int i = 2; i <= 5842; i++)
    {

        arr[i] = min(min(2 * arr[a], 3 * arr[b]), min(5 * arr[c], 7 * arr[d]));
        if(arr[i] == 2 * arr[a])
            a++;
        if(arr[i] == 3 * arr[b])
            b++;
        if(arr[i] == 5 * arr[c])
            c++;
        if(arr[i] == 7 * arr[d])
            d++;

    }
}
int main()
{
    int n;
    fun();
    while(cin >> n)
    {
        if(n == 0)
        {
            break;
        }
        if(n % 100 >10 && n % 100 <20)
        {
            printf("The %dth humble number is %lld.\n", n, arr[n]);
            continue;
        }
        if(n % 10 == 1)
        {
            printf("The %dst humble number is %lld.\n", n, arr[n]);
        }
        else if(n % 10 == 2)
        {
            printf("The %dnd humble number is %lld.\n", n, arr[n]);
        }
        else if(n % 10 == 3)
        {
            printf("The %drd humble number is %lld.\n", n, arr[n]);
        }
        else
        {
            printf("The %dth humble number is %lld.\n", n, arr[n]);
        }
    }
}
