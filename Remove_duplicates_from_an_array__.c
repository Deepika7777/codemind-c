#include<stdio.h>
int main()
{
    int arr[25],n,i,j,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
            for(k=j;k<n-1;k++)
            {
                arr[k]=arr[k+1];
            }
            n--;
            j--;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}