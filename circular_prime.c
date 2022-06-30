#include<stdio.h>
int main()
{
    int n,s=0,r,i,l=0,m=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            l++;
        }
    }
    while(n>0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    for(i=1;i<=s;i++)
    {
        if(s%i==0)
        {
            m++;
        }
    }
    if(l==2 && m==2)
    {
        printf("circular prime");
    }
    else if(l==2 || m==2)
    {
        printf("prime but not a circular prime");
    }
    else
    {
        printf("not prime");
    }
}
