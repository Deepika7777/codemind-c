#include<stdio.h>
#include<math.h>
int main()
{
    long int n,i=0,d=0,b=0;
    scanf("%ld",&n);
    while(n)
    {
        d+=(n%10)*pow(8,i);
        n/=10;
        i++;
    }
    i=1;
    while(d)
    {
        b+=(d%2)*i;
        d/=2;
        i*=10;
    }
    printf("%ld",b);
}
