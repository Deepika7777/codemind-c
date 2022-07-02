#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,sum=0,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(a[i]==a[j] && a[i]!=-1)
                {
                    a[j]=-1;
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=-1)
        {
            if(a[i]%2!=0)
            {
                sum+=a[i];
            }
        }
    }
    printf("%d",sum);
}
