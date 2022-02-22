#include<stdio.h>
int main()
{
    int Hf,Sf,Spf;
    scanf("%d%d%d",&Hf,&Sf,&Spf);
    {
     if(Hf>50 && Sf>60 && Spf>100)
     {
         printf("10");
     }
     else if(Hf>50 && Sf>60)
     {
         printf("9");
     }
     else if(Sf>60 && Spf>100)
     {
         printf("8");
     }
     else if(Hf>50 && Spf>100)
     {
         printf("7");
     }
     else if(Hf>50 || Sf>60 || Spf>100)
     {
         printf("6");
     }
     else
     {
         printf("5");
     }
    }
    return 0;
    
}