#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;

    while(cin >> n >> m)
    {

        vector <string > vs;
        string s1,s2, s3[1005];
        cin >> s1;
        s3[0] = s1;
        for(int i = 1; i < n; i++)
        {
            cin >> s2;
            int cnt = 0;
            for(int j = 0; j < m; j++)
            {
                if(s1[j] != s2[j])
                    cnt++;
            }

            s3[cnt]=s2;
        }

        for(int i = 0; i < n; i++){
            cout<< s3[i]<< endl;
        s3[i].clear();}

    }
}
