#include<stdio.h>
int fun(int num)
{
    int i,fc=0;
    for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			fc++;	
		}	
	}
	if(fc==2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
    int n,a[100],i,c=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(fun(a[i]))
        {
            if(a[i]>=k)
            {
                c+=1;
            }
        }
    }
    printf("%d",c);
}
