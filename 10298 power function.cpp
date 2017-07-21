#include <bits/stdc++.h>
using namespace std;
int pi[1000005];
string t, p;
void prefix_table () {
    int i = 1, j = 0;
    pi[0] = 0;
    for (i; i < p.size(); ) {
        if (p[i] == p[j]) {
            pi[i] = j+1;
            j++;
            i++;
        }
        else {
            while (p[i] != p[j] && j != 0) {
                j = pi[j-1];
            }
            if (j == 0 && p[i] != p[j]) {
                pi[i] = 0;
                i++;
            }
        }
    }
}

int main ()
{
   while(cin >> p && p != ".") {
       prefix_table();
       int x;
       x = p.size() - pi[p.size() - 1];
       cout << p.size() / x<< endl;

   }
}
