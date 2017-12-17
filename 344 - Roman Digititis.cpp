#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    while(cin >> n && n)
    {
        int i_count = 1, v_count = 0, x_count = 0, l_count = 0, c_count = 0;

        for(int i = 2; i <= n; i++)
        {
            if(i % 10 == 1 || i % 10 == 4 || i % 10 == 6 || i % 10 == 9)
                i_count = i_count + 1;
            if(i % 10 == 2  || i % 10 == 7)
                i_count = i_count + 2;
            if(i % 10 == 3|| i % 10 == 8 )
                i_count = i_count + 3;
            if(i % 10 == 4||i % 10 == 5||i % 10 == 6||i % 10 == 7||i % 10 == 8 )
                v_count= v_count+ 1;
            if((i>=9 && i<19) || (i>=40 && i<49) || (i>=59 && i<69) || (i>=90 && i<99))
                x_count=x_count+1;
            if((i>=19 && i<29) || i==49 || (i>=69 && i<79) || i==99)
                x_count=x_count+2;
            if((i>=29 && i<39) || (i>=79 && i<89))
                x_count=x_count+3;
            if(i==39 || i==89)
                x_count=x_count+4;
           // x_count=x_count+4;
            if(i >= 40 && i <= 89)
                l_count = l_count+ 1;
            if(i >= 90)
                c_count = c_count+ 1;

        }

        printf("%d: %d i, %d v, %d x, %d l, %d c\n", n, i_count, v_count, x_count, l_count, c_count);
    }



}
