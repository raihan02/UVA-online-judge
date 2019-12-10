#include <bits/stdc++.h>
using namespace std;
int primeCount[10004];
bool isPrime (int n)
{
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int formula (int n)
{
    n = (n * n) + n + 41;

    return n;
}

void init()
{

    for(int i = 0; i <= 10000; i++)
    {
        primeCount[i + 1]= primeCount[i];
        if(isPrime(formula(i)) == true)
        {
            primeCount[i + 1] = primeCount[i] + 1;
        }
    }
    /*
    for(int i = 0; i <= 42; i++)
    {
        cout<< primeCount[i] << endl;
    }
    */
}
int main()
{
    int a, b;
    init();
    while(cin >> a >> b)
    {
        double res = double(primeCount[b + 1] - primeCount[a]);

       // cout<< res << endl;

        res /= double(b  - a + 1);

        //cout<< res << endl;
        printf("%.2lf\n", res* 100.00 + 1e-6);
         printf("%.2lf\n", res* 100.0); /// eita amar 
    }
}
