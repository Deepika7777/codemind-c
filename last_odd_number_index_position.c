#include<stdio.h>
void fun(int n)
{
    int arr[n],x,i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2)
        x=i;
    }
    printf("%d",x);
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n);
}
