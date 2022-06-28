#include<stdio.h>
int main()
{
    long long int v;
    scanf("%lld",&v);
    if(v%10==0)
    {
        v/=10;
        printf("%lld",v);
    }
    else
    {
        if(v>0)
        {
            v/=10;
            printf("%lld",v);
        }
        else
        {
            v/=10;
            printf("%lld",--v);
        }
    }
}