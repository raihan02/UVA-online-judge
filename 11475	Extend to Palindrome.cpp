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
int kmp (string target, string pattern) {
    prefix_function (pattern);
    int i = 0, j = 0;
    int cnt = 0;

    int c = 0;
    for (i, j; i < target.size(); ) {
        if (target[i] == pattern[j]) {
                //cout<<target[i] << " " << pattern[j]<< endl;
            i++; j++;
        }
        else {
            while (target[i] != pattern[j] && j > 0){

                j = pi[j-1];

            }
            if (target[i] != pattern[j]) i++;
        }


    }
    return j;
}
int main()
{
    string s,s1;
    while(cin >> s)
    {
        s1 =s;
        reverse(s1.begin(),s1.end());

        int x = kmp(s,s1);
        cout<<s;
        for(int i = x; i < s1.size(); i++)
            cout<<s1[i];
        cout<< endl;
    }
}
