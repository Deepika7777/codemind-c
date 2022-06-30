#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum,i,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
}
