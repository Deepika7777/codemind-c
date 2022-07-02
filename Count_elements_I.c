#include<stdio.h>
int main()
{
    int n,m,a[100],b[100],c[100],i,j,k,c1=0,c2=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<m;i++)
    scanf("%d",&b[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<n-1;k++)
                {
                    a[k]=a[k+1];
                }
                n--;
                j--;
            }
            
        }
    }
    for(i=0;i<m;i++){
        for(j=i+1;j<m;j++)
        {
            if(a[i]==a[j])
            {
               for(k=j;k<m-1;k++)
               {
                    a[k]=a[k+1];
               }
                m--;
                j--;
            }
           
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                c1++;
            }
        }
    }
    printf("%d",c1);
    
}
