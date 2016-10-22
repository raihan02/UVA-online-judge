#include <bits/stdc++.h>
using namespace std;
#define in -1
#define mx 100010
int arr[mx];
int st[mx];
int main()
{
    int m , n;

    while(cin >> m >> n)
    {
        if(m == 0 and n == 0)
            break;
        string s;
        cin >> s;
        int top = -1;
        int p = n;
        vector <int> v;
        for(int i = 0; i < s.length(); i++)
        {
            int x = s[i] - '0';

            while(n > 0 and top != in and st[top] < x)
            {
                n--;
                top--;
            }
            st[++top] = x;
        }
        for(int i = 0; i < m - p; i++)
        {
            printf("%d", st[i]);
        }
        printf("\n");
        s.clear();
        memset(arr, 0 , sizeof arr);
        memset(st, 0, sizeof st);
    }
}
