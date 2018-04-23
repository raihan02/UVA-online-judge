#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    vector <int> v1, v2;
    while(cin >> n)
    {
        if(n == 0)
        {
            break;
        }
        getchar();
        getline(cin, s);


        if(s == "right on")
        {

            vector <int> :: iterator it1,it2;
             int mx = 0, mn = 11;
          //  cout<<*it1 << " " << *it2 << endl;
            if(v2.size() > 0)
            for(int i = 0; i < v2.size(); i++)
            {
                 mx = max(mx, v2[i]);
            }

            if(v1.size() > 0)
             for(int i = 0; i < v1.size(); i++)
              mn = min(mn, v1[i]);

            if(n > mx && n < mn)
            {
                cout<<"Stan may be honest"<< endl;
            }
            else
            {
                cout<<"Stan is dishonest" << endl;
            }
            v1.clear();
            v2.clear();
        }

        else if(s == "too high")
        {
            v1.push_back(n);
        }
        else
        {
            v2.push_back(n);
        }



    }
}
