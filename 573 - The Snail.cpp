#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double H,D,U,F;
    while(1)
    {
        cin >> H >>U>>D>>F;
        if(!H)
            break;
        int cnt = 0;
        double ans = (F*U) / 100;
        double hh = 0.00;

        //cout<<ans << endl;
        while(1)
        {
            cnt++;

           if(U > 0)
            hh = hh + U;
            U = U - ans;



            if(hh > H)
                break;
                 hh = hh - D;
            if(hh < 0)
                break;
        }

       if(hh >= 0)
        printf("success on day %d\n", cnt);
       else
        printf("failure on day %d\n", cnt);
    }
}
