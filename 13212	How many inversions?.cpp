#include <iostream>
#define inf 1 << 30 /// Infenite value
using namespace std;
typedef long long int ll;
ll A[1000006]; /// Global Array declare
int n;
ll inv = 0;
void merges(int p , int q, int r)
{
    int n1=  q -p + 1; /// First array length
    int n2 = r - q; /// second Array length
    int L[n1 + 1] , R[n2 + 1];  /// 2 Array
    for(int i = 1; i <= n1; i++)
    {
        L[i] = A[p + i - 1];
    }
    for(int j = 1; j <= n2; j++)
    {
        R[j] = A[q + j];
    }
    L[n1 + 1] = inf;
    R[n2 + 1] = inf;
    int i = 1, j = 1;

   // int inv = 0;
    /// Mering two array
    for(int k = p; k <= r; k++)
    {
        if(L[i] <= R[j])
        {
            A[k] = L[i];
            i = i + 1;
        }
        else
        {
            A[k] = R[j];
            j = j + 1;
            inv = inv + n1 - i + 1;
        }
    }


}
void mergesort(int p , int r)
{
    if(p < r)
    {
        int q = ((p + r) / 2);
        /// recursive call
        mergesort(p , q);
        mergesort(q + 1,  r);
        merges(p , q, r);
    }
}
void getInput()
{
    for(int i = 1; i <= n; i++)
        cin >> A[i];
}
int main()
{
    while(cin >> n)
    {
        if(n == 0)
            break;

        getInput();
        inv = 0;
        mergesort(1, n);
        cout<< inv << endl;
    }
}
