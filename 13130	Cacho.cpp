#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tes;
    cin >>tes;

    while(tes--)
    {
        int A[13]={0};
        for(int i = 0 ; i < 5; i++)
        {
           cin >> A[i];
        }
        int cnt=0;
        for(int i = 0; i < 4; i++)
        {
           if(A[i]+1 == A[i+1])
           cnt++;
        }
            //scout<<cnt << endl;
        if(cnt == 4)
        cout<<"Y"<< endl;
        else
        cout<<"N"<< endl;

    }

}
