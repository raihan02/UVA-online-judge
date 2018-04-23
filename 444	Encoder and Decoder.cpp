#include <bits/stdc++.h>
using namespace std;
vector <int> vc;
vector <char> ch;
void fun()
{
    for(int i = 65; i <= 122; i++)
    {
        if(i >= 91 && i <= 96)
            continue;
        vc.push_back(i);
        ch.push_back(i);
    }

    vc.push_back(32);
    vc.push_back(33);
    vc.push_back(44);
    vc.push_back(46);
    vc.push_back(58);
    vc.push_back(59);
    vc.push_back(63);

}
int rev (int n)
{

    int res= 0;
    while(n > 0)
    {
       int x = n % 10;
        cout<<x;
        n/=10;
    }

}
int num (string s)
{

    int res= 0;
    for(int i = 0; i < s.size(); i++)
        res = res * 10 + s[i] - '0';

    return res;
}
int main()
{
    fun();

    sort(vc.begin(), vc.end());


    string s;

    while(getline(cin ,s))
    {
        int len = s.size();

        bool f = 0, ck = 0;
         int cnt = 0, c = 0;

        if(isdigit(s[0]))
            f = 0;
            else
                f = 1;


       if(f)
       {
           for(int i =  len - 1; i >= 0; i--)
           {
               int x = s[i];
               rev(x);
           }
       }
       else
       {
           reverse(s.begin(),s.end());
           int ans = 0;
           for(int i = 0; i < s.size(); i++)
           {
               ans = ans * 10 + s[i] - 48;

               if((ans >= 65 && ans <= 90 ) || (ans >= 97 && ans <= 122) || ans == 32 || ans == 33 || ans == 44 || ans == 46|| ans == 58|| ans == 59 || ans == 63)
               {
                   printf("%c", ans);
                   ans = 0;
               }
           }
       }
       cout<< endl;


    }
}
