#include<stdio.h>
int main()
{
    int n,m,a[10][10],i,j,sum,c[10],k=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
            sum+=a[j][i];
        }
        c[k]=sum;
        k++;
    }
    int max=c[0];
    for(i=0;i<=k;i++)
    {
        if(max<c[i])
        {
            max=c[i];
        }
    }
    printf("%d",max);
}
