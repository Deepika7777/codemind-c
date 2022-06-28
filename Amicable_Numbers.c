#include<stdio.h>
int main()
{
    long long int a,b,sum=0,i;
    scanf("%lld%lld",&a,&b);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        sum=sum+i;
    }
    if(sum==b)
    printf("Amicable");
    else
    printf("Not Amicable");
    return 0;
}
