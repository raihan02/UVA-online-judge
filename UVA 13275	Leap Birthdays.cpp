#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tes,o=0;
    cin >> tes;
    while (tes--)
    {
        int dd, mm, yy, Y;
        o++;
        cin >> dd >> mm >> yy >> Y;

        printf("Case %d: ", o);
        if (dd != 29 || mm != 2)
        {
            printf("%d\n", Y-yy);
        }
        else
        {
            int c1 = Y/4 - Y/100 + Y/400;
            int c2 = yy/4 - yy/100 + yy/400;
            printf("%d\n", c1-c2);
        }
    }
    return 0;
}
