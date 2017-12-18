#include <bits/stdc++.h>
using namespace std;
bool check (string s)
{
    string ss = s;
    reverse(s.begin(), s.end());
    return ss == s;
}
int main()
{

    string s;

    while(cin >> s)
    {
        string sp, sk;
        set<string> st;
        st.insert(s);
        for(int i = 0; i < s.size(); i++)
        {

            for(int j = 0; j < s.size(); j++)
            {
                 // sp = s.substr(j);
                  sk = s.substr(i,j);
                  //st.insert(sp);
                  st.insert(sk);
            }

        }

        set <string> :: iterator it;
        int cnt = 0;
        for(it = st.begin(); it != st.end(); it++)
        {
           string ss;
           ss = *it;

           bool t = check(ss);

           if(t == true){
                if(ss == "")
                 continue;
            //cout<<ss<< endl;
            cnt++;
           }
        }

       cout<<"The string "<<"'" <<s <<"'"<<" contains "<<cnt<<" palindromes." << endl;
       st.clear();
    }
}
