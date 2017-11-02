#include <stdio.h>

#include <math.h>
int main()
{
    int tes;
    scanf("%d", &tes);
    while(tes--)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        int ans = y - x;
        //printf("%d\n",ans);
        if(ans == 0)
            printf("0\n");
        else
            printf("%d\n", (int)sqrt(ans * 4 -1));
    }
}
