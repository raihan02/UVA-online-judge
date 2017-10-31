#include <bits/stdc++.h>
using namespace std;
string s[19] = {"Happy", "birthday", "to" , "you" , "Happy" , "birthday" ,"to" ,"you", "Happy", "birthday", "to" , "Rujia", "Happy" ,"birthday", "to", "you"};
int main()
{
    int n;
    vector <string> vs;
    while(cin >> n)
    {
        for(int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            vs.push_back(s);
        }

        if(n == 16)
        {
            for(int i = 0; i < n; i++)
            {
                cout<< vs[i] <<": " << s[i] << endl;
            }
            continue;
        }
        else if (n < 16)
        {
            for(int i = 0, j = 0; i < 16; i++, j++)
            {
                if(j == n)
                    j = 0;
                cout<< vs[j] << ": " << s[i] << endl;

            }
        }
        else if (n % 16 == 0)
        {
            for(int i = 0, j = 0; i < n; i++, j++)
            {
                if(j == 16)
                    j = 0;
                cout<< vs[i] << ": " << s[j] << endl;
            }
        }

        else
        {
            int p =  n / 16;

            int x = 16 + 16 * p;
            int a = 0, b = 0;
            for(int i = 0; i < x; i++)
            {
                if(a == n)
                    a = 0;
                if(b == 16)
                    b = 0;

                cout<<vs[a] << ": " << s[b] << endl;
                a++;
                b++;
            }
        }
    }
}
