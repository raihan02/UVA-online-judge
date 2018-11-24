#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tes,o=0;
    cin>>tes;
    while(tes--)
    {
        string s;
        cin >> s;
        int arr[218]= {0};
        for(int i =0; i<s.size(); i++)
            arr[s[i]]++;
        bool f=1;
       int cnt = 99999999;
        for(int i=97; i<=122; i++){
         //printf("%c %d\n", i, arr[i]);
           cnt = min(cnt, arr[i]);

        }
        o++;

        printf("Case %d: %d\n",o,cnt);

    }
}
