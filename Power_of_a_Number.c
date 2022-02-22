#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,k,l;
    scanf("%d%d%d",&a,&b,&c);
    k=pow(a,b);
    l=k%c;
    printf("%d",l);
    return 0;
}