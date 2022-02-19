#include<stdio.h>
int main()
{
    int n,i;
    float res,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        res=1.0/i;
        sum=sum+res;
    }
    printf("%.2f",sum);
    return 0;
    
}