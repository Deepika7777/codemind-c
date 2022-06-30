#include<stdio.h>
int main()
{
    int n,c,r,m,i;
    scanf("%d",&n);
    start:
    n++;
    m=n;
    r=0;
    while(m>0)
    {
        r=r*10+m%10;
        m/=10;
    }
    if(r==n)
    {
        c=0;
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            printf("%d",n);
        }
        else
        {
            goto start;
        }
    }
    else
    {
        goto start;
    }
}
