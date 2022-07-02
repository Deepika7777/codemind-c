#include<stdio.h>
int main()
{
    int i, j, r, c, a[10][10], Sum;
    scanf("%d%d",&i,&j);
    for(r=0;r<i;r++)
    {
        for(c=0;c<j;c++)
        {
            scanf("%d", &a[r][c]);
        }
    }
    for(r=0;r<i;r++)
    {
        Sum = 0;
        for(c=0;c<j;c++)
        {
            Sum=Sum+a[r][c];
        }
        printf("%d ", Sum );
    }
}
