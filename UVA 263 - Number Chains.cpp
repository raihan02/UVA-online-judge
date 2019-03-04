#include <bits/stdc++.h>
using namespace std;
char s[11];
char temp[11];
void srt (int l)
{
    for(int i = l - 1; i >= 0; i--)
    {
        for(int j = 0; j < i; j++)
        {
            if(s[j] > s[j + 1])
            {
                swap(s[j], s[j + 1]);
            }
        }
    }
}
long int fun (int len)
{
    long int res = 0;
    for(int i = 0; i < len; i++)
    {
        res = res * 10 + s[i] - 48;
    }
    return res;
}
void rev( int l)
{
    int i;
    for(i = 0; i < l; i++)
        temp[i] = s[i];

        temp[i] = '\0';

    int p = 0;

    for(i = l - 1; i >= 0; i--){
        s[p] = temp[i];
         p++;
    }
    s[p] = '\0';
}
int main()
{

    while(cin >> s)
    {
        int l = strlen(s);

        if(l ==1  && s[0] == '0')
            break;
       int cnt = 0;
       map <long int,int> mp;
        long int res1= 0, res2 = 0, ans = 0;
       // int cnt = 0;
       printf("Original number was %s\n",s);
       while(1)
       {
           int len = strlen(s);
           cnt++;

           srt(len);
           res1 = fun(len);
           rev(len);
           res2 = fun(len);
           ans = res2 - res1;
           printf("%ld - %ld = %ld\n", res2 ,res1 ,ans);
           if(mp.find(ans) != mp.end())
            break;
           sprintf(s,"%ld", ans);
           if(cnt>=1000)
            break;

           mp[ans] = 1;
       }
       printf("Chain length %d\n\n",cnt);

    }
}
