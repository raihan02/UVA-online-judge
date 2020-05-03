#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;
vector<int>vec;
char str[10000];

int main()
{

    int T,y;
    vector<int>v;
    cin>>T;
    char m[10004];
    while(T--)
    {

        scanf("%s", m);
        int decValue, hexValue;
        sscanf(m, "%d", &decValue);
       // cout<< decValue << endl;
        while(decValue>0)
        {
            vec.push_back(decValue%2);
            decValue=decValue/2;
        }

        reverse(vec.begin(), vec.end());
        int c1 = 0, c2 = 0;
        c1  = count(vec.begin(), vec.end(), 1);
        vec.clear();
        sscanf(m, "%X", &hexValue);
        while(hexValue>0)
        {
            vec.push_back(hexValue%2);
            hexValue=hexValue/2;
        }
        c2  = count(vec.begin(), vec.end(), 1);
        cout<<c1 << " " << c2 << endl;
        vec.clear();

    }
}
