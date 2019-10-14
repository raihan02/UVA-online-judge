#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int tes, lastDigit, modValue;

    cin >> tes;

    while(tes--)
    {
        string s;
        cin >> s;

        if(s == "1")
        {
            cout<< 66 << endl;
        }
        else if (s == "0")
        {
            cout<< 1 << endl;
        }
        else
        {
            lastDigit = s[s.size() - 1] - '0';
            //modValue;

            modValue = lastDigit % 5;

            if(modValue == 1)
            {
                cout<< 16 << endl;
            }
            else if(modValue == 2)
            {
                cout<< 56 << endl;
            }

            else if(modValue == 3)
            {
                cout<< 96 << endl;
            }
            else if(modValue == 4)
            {
                cout<< 36 << endl;
            }
            else {
                cout<< 76 << endl;
            }

        }
    }
}
