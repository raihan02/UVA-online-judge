#include <bits/stdc++.h>
using namespace std;
void fun(int n)
{
    if (n >= 1)
    {
        printf("((");
        fun(n - 1);
        printf("|((A%d|A%d)|(B%d|B%d)))|(A%d|B%d)", n, n, n, n, n, n);
        printf(")");
    }
    else
        printf("((A%d|B%d)|(A%d|B%d))", n, n, n, n);
}
int main()
{
    int tes;
    scanf("%d", &tes);
    while (tes--)
    {
        int n;
        scanf("%d", &n);
        fun(n - 1);
        cout<< endl;
        if (tes != 0)
            cout<< endl;
    }
    return 0;
}
