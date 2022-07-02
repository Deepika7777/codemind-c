#include<stdio.h>
int main()
{
    int n,p,q,a[100],i,sum=0,c=0,min=100;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&p,&q);
    for(i=0;i<n;i++)
    {
        if(a[i]>=p  && a[i]<=q)
        {
            if(a[i]<min)
            {
                min=a[i];
                c++;
            }
        }
    }
    if(c!=0)
    {
        printf("%d",min);  
    }
    else
    {
        printf("-1");
    }
   
    
}
