#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,x,z;
    scanf("%f%f%f",&a,&b,&c);
    if(1<=a<=b<=c<=1000);
    x=(a+b+c)/2;
    z=sqrt(x*(x-a)*(x-b)*(x-c));
    printf("%.2f",z);
    
}