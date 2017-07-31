#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
int pi[1000001];
void prefix_function (string pattern)
{
    int i = 1, j = 0;
    pi[j] = 0;
    for (i, j; i < pattern.size(); )
    {
        if (pattern[i] == pattern[j])
        {
            pi[i] = j+1;
            i++;
            j++;
        }
        else
        {
            while (pattern[i] != pattern[j] && j > 0) j = pi[j-1];
            if (pattern[i] != pattern[j])
            {
                pi[i] = 0;
                i++;
            }
        }
    }
}
int main()
{
    string s;
    while(cin >> s && s!=".")
    {
        memset(pi,0,sizeof pi);

        prefix_function(s);
        int x = s.size() - pi[s.size() -1];
        cout<<s.size()/x<< endl;

    }
}
