#include<stdio.h>
int main()
{
    int n,arr[20],i,ec=0,oc=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            ec++;
        }
        else
        {
            oc++;
        }
    }
        printf("%d %d",ec,oc);
    return 0;
}