#include <bits/stdc++.h>
using namespace std;
double fun (double a, double b)
{
    return sqrt(a * a  + b * b);
}
int main()
{
   int n;

   while(cin >> n)
   {
       if(!n)
        break;
       vector < pair <double , double > > v, p;

       for(int i = 0; i < n; i++)
       {
           double x, y;
           cin >> x >> y;

           v.push_back(make_pair(x,y));
       }

       sort(v.begin(), v.end());

       //reverse(v.begin(), v.end());
       double sum = 0.0;
       vector <double> vx;
       double mn = 99999999.00, x,  y, res=  0.0;
       for(int i = 0; i < n; i++)
       {
           for(int j = i + 1; j < n; j++)
           {
               double pp, qq ;

               pp = abs(v[i].first - v[j].first); qq = abs(v[i].second - v[j].second);

               res = fun(pp, qq);

               if(res < mn)
               {
                   mn = res;
               }
           }


       }
            if(mn >= 10000.00)
            printf("INFINITY\n");
           else
            cout<<fixed << setprecision(4) << mn << endl;

            v.clear();


   }


}
