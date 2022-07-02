#include<stdio.h>
int main()
{
    int r,v[2004],k,m=0;
    scanf("%d",&r);
    for(k=0;k<r;k++)
    {
        scanf("%d",&v[k]);
    }
    for(k=0;k<r;k++)
    {
        if(v[k]<v[k+1])
        {
            m++;
        }
    }
    if(m==r-1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
