#include<stdio.h>
int counting(int n,int *b,int len)
{
    int m=0;
    for(m=0;m<len;m++)
    {
        if(b[m]==n)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,flag=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int j=0,k=0,b[n];
    for(i=0;i<n;i++)
    {
        int count=1;
        //int flag=0;
        
        if(counting(a[i],b,n))
        {
        b[k]=a[i];
        k++;
        for(j=i+1;j<n;j++)
        
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        if(count==a[i])
        {
            flag++;
        }
        }
    }
    printf("%d ",flag);
    return 0;

}
