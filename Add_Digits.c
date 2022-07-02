#include<stdio.h>
int fun(int n)
{
    int sum=0,rem,temp;
    temp=n;
        while(n>0)
        {
            rem=n%10;
            sum=sum+rem;
            n=n/10;
        }
    return sum;
}
int main()
{
    int n,sum;
    scanf("%d",&n);
    while(n>9)
    {
        n=fun(n);
    }
        printf("%d",n);
}
