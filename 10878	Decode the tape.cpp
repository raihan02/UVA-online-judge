#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	//freopen("raju.txt", "r+",stdin);
	int c=0,i,len;
	getline(cin,s);
	while(getline(cin,s)){
		if(s == "___________")
            break;

        int c = 0;

        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'o')
            {
                c = (c* 2)+ 1;
            }
            else if(s[i] == ' ')
            {
                c = c* 2;
            }
        }

        printf("%c", c);

	}
	return 0;
}
