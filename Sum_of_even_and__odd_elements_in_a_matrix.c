#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n][m],i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int sum=0,p=0;
    for(i=0;i<n;i++)
    {

        for(j=0;j<m;j++)
        {
            if(a[i][j]%2==0)
            {
                sum=sum+a[i][j];
            }
           else
            {
                p=p+a[i][j];
            }
        }
    }
    printf("%d %d",sum,p);
    return 0;
}