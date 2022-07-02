#include<stdio.h>
int main()
{
    int S,T,B,capacity,c_k_b;
    scanf("%d%d%d",&S,&T,&B);
    capacity=2*S*T*B*512;
    c_k_b=capacity/1024;
    printf("%dKB",c_k_b);
}
