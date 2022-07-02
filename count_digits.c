#include<stdio.h>
int main()
{
    int n,k,arr[1000000],i,temp,d,c1=0,c2=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        scanf("%d",&arr[i]);
        //printf("%d ",arr[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=arr[i];
        while(temp!=0)
        {
            d=temp%10;
            c1++;
            temp=temp/10;
        }
        
        if(arr[i]==0)
       c1++;
        arr[i]=c1;
       printf("%d ",arr[i]);
        c1=0;
    }
    

}
