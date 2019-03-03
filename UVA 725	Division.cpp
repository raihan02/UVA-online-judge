#include <bits/stdc++.h>
using namespace std;
int main()
{
   char s[100];
   int n;
   bool xx = 0;
   while(cin >> n)
   {
       if(n == 0)
        break;
       int x;
       if(xx)
        cout<< endl;

       xx = 1;

       bool ff = 0,flag;

       for(int i = 1234; i <= 99999; i++)
       {
           x = i * n;
          char s[11];
          int f[60] = {0};
           if(x > 99999)
             break;
           sprintf(s, "%05d", i);

           //cout<< s << endl;

           for(int k = 0; k < strlen(s); k++)
           {
               f[s[k]]++;
           }
           sprintf(s, "%05d", x);
           //cout<<s<< endl;

           for(int k = 0; k < strlen(s); k++)
           {
               f[s[k]]++;
           }
            flag = 0;
           for(int p = 48; p < 57; p++)
           {
              if(f[p] != 1)
              {
                  flag = 1;
                  break;
              }
           }

           if(!flag)
           {
               printf("%05d / %05d = %d\n",i*n,i,n);
               ff = 1;
           }
       }
       if(!ff)
       {
           printf("There are no solutions for %d.\n", n);
       }
   }
}


