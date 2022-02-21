#include<stdio.h>
int main()
{
    int arr[100][100],k,r,c,i,n,j;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            k=k+arr[i][j];
        }
    }
    printf("%d",k);
    return 0;
}