#include<stdio.h>
int digit_count(int num)
{
    int d,k=0;
    if(num==0)
    {
        return 1;
    }
    while(num!=0)
    {
        d=num%10;
        num=num/10;
        k++;
    }
    return k;
}
int main()
{
    int n,i,m,arr[100],k,c=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        k=digit_count(arr[i]);
        if(k==m)
        {
            c++;
        }
    }
    printf("%d",c);
}
