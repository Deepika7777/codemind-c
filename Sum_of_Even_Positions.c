# include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],os=0,i;
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        os=os+a[i];
    }
    printf("%d",os);

return 0;
}
