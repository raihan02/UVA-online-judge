#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string rev(string rs)
{
    reverse(rs.begin(), rs.end());
    return rs;
}
string divide(string str, int d)
{
    int l = str.size();
    int D = 0;
    string res = "";
    for(int i=0; i<l; i++)
    {
        D = D*10 + str[i] - 48;
        res += D/d + 48;
        D %= d;
    }
    return res;
}
string add (string s1, string s2)
{
    int carry= 0 ,x , y , sum = 0 , k = 0;
    string cc;
    if(s1.length() < s2.length())
    {
        swap(s1, s2);
    }

    string s = "";

    for(int i = 0; i < s1.length(); i++)
    {
        if(i < s2.length())
        {
            x = s1[i] - 48;
            y = s2[i] - 48;
            sum = x + y + carry;
            k = sum % 10;
            s += k + '0';

            carry = 0;

            if(sum > 9)
                carry = 1;
            if(carry == 1 && i == s1.length() - 1)
            {
                s +=  '1';
            }
        }
        else
        {
            x = s1[i] - 48;
            sum = carry + x;
            k = sum % 10;
            s += k + '0';

            carry = 0;

            if(sum > 9)
                carry = 1;
            if(carry == 1 && i == s1.length() - 1)
            {
                s += '1';
            }

        }
    }
    return s;
}
void print(string s)
{

    bool f = false;
    int i;
    for( i=0; i< s.size(); i++)
    {
        if(s[i]!='0') {
            f = true;
            break;
        }
    }
    for(;i<s.size(); i++)
    {
        printf("%c",s[i]);
    }
    if(!f) printf("0");
}

int main()
{
    int tes, d, o = 0;

    while(cin >> tes >> d)
    {
        if(tes == 0 && d == 0)
            break;
        o++;
        string sum ="0", s,s2;
        for(int i = 0; i < tes; i++)
        {

            cin >> s;
            s2 = rev(s);

            sum = add(s2, sum);

        }
        sum = rev(sum);
        string ans;
        ans= divide(sum,d);

        //while(ans[0] == '0') ans.erase(ans.begin());

        cout<< "Bill #"<<o<<" costs " << sum << ": each friend should pay "; // << endl<< endl;
        print(ans);
        cout<< endl << endl;
        ans.clear();
        sum.clear();
        s.clear();
        s2.clear();
    }

}
