#include <bits/stdc++.h>
using namespace std;
int main()
{
   string s1, s2, s3;

   while(cin >> s1 >> s2)
   {

       if(s1 == "0" && s2 == "0")
        break;
        int val = s1[s1.size() - 1] - '0';
       int sum1 = 0 , sum2 = 0;
       if(s2.size() >= 2)
       {
           s3+= s2[s2.size() - 2];
           s3+= s2[s2.size() - 1];
           //cout<< s3 << endl;
           for(int i = 0; i < s3.size(); i++)
           {
               sum1 = sum1 * 10 + s3[i] - '0';
           }

         s3.clear();
       }
       else
       {
           sum1 = s2[s2.size() - 1] - '0';
       }

       //cout<<val << " " << sum1 << endl;
       if(val == 0)
       {
           printf("0\n");
           continue;
       }
       else if(sum1 == 0 && s2.size() == 2)
       {
           cout<<1<<endl;
           continue;
       }
       else if(sum1 == 0)
       {

           int tot = val;
           sum1 = 99;
           for(int i = 1; i < sum1; i++)
           {
               tot = tot * val;

               tot = tot % 10;
           }

           cout<<(tot * val) % 10 << endl;
           continue;
       }

       else
       {
           int tot = val;
           for(int i = 1; i < sum1; i++)
           {
               tot = tot * val;

               tot = tot % 10;
           }

           cout<<tot % 10 << endl;
       }
       s3.clear();

   }


}
