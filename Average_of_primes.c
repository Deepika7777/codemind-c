#include<stdio.h>
#include<math.h>
int main()
{
    int v[2004],r,k,n=0,l=0,j;
    float m;
    scanf("%d",&r);
    for(k=0;k<r;k++)
    {
        scanf("%d",&v[k]);
    }
    for(k=0;k<r;k++)
    {
        for(j=1;j<=v[k];j++)
        {
            if(v[k]%j==0)
            {
                n++;
            }
        }
        if(n==2)
        {
            m+=v[k];
            l++;
        }
        n=0;
    }
    m=m/l;
    printf("%0.2f",m);
}
