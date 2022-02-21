#include<stdio.h>
int main()
{
   long long int n,i,arr[100],c=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
        c=c+arr[i];
    }
    printf("%lld",c);
    return 0;
}