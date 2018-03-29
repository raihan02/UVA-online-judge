#include <bits/stdc++.h>
using namespace std;
char sp[255];
int main()
{
    string s1, s2, s3;

    int tes;
    cin >> tes;
    getchar();
    getchar();
    while(tes--)
    {
        getline(cin, s1);
        getline(cin, s2);
        cout<<s2<< endl;
         cout<< s1 << endl;
         memset(sp,0,sizeof sp);
         for(int i = 0; i < s1.size(); i++)
         {
             sp[s1[i]] = s2[i];
         }



         while(getline(cin , s3))
         {
             if(s3.size() == 0)
                break;
             for(int i = 0;  s3[i] ; i++)
             {
                 if(sp[s3[i]] == 0)
                    cout<< s3[i];
                 else
                    cout<< sp[s3[i]];
             }
             cout<< endl;
         }
         if(tes)
            cout<< endl;

    }
}
