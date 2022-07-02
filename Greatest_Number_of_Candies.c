#include<stdio.h>
int main()
{
    int n,m,i;
    scanf("%d",&n);
    int arr[n],max=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>max)
        max=arr[i];
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(arr[i]+m>=max)
        printf("True ");
        else
        printf("False ");
    }
}