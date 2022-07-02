#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,c,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                a[j]=11111;
            }
        }
        if(a[i]!=11111)
        {
            printf("%d ",a[i]);
        }
    }
}
