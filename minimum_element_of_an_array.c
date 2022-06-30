#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,min;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0; i<n; i++)
    {
        if(min>a[i])
        {
            min=a[i];
            a[i]=a[0];
        }
    }
    printf("%d",min);
}
