#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int tes;
    cin >> tes;
    while(tes--)
    {
        cin >> n;
        int sum = 0;

        for(int i = 1; i <= sqrt(n); i++)
        {
            if(n % i == 0)
            {
                sum += i;
                if(i == n / i)
                    continue;
                if(n / i == n)
                        continue;
                sum += n/i;
            }
        }
         // cout<<sum << endl;
        if(sum > n)
            cout<<"abundant"<< endl;
        else if(sum == n)
        {
            cout<<"perfect"<< endl;
        }
        else
            cout<<"deficient"<< endl;
    }
}
