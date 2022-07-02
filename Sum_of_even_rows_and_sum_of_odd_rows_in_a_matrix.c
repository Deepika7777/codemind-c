#include<stdio.h>
int main()
{
   int m,n,i,j,sum=0,summ=0;
   scanf("%d %d",&n,&m);
   int arr[n][m];
   for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
       {
           scanf("%d",&arr[i][j]);
       }
   }
   for(i=0;i<n;i++)
   {
       if(i%2==0)
       {
           for(j=0;j<m;j++)
           {
               sum=sum+arr[i][j];
            }
        }
   }
    for(i=0;i<n;i++)
   {
       if(i%2!=0)
       {
           for(j=0;j<m;j++)
           {
               summ=summ+arr[i][j];
            }
        }
   }
   printf("%d %d",sum,summ);
}
  
