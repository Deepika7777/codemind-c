#include<stdio.h>
int main()
{
    char str[100];
    int n,i,max;
    //scanf("%d",&n);
    scanf("%[^
]s",str);
    max=str[0];
    for(i=0;str[i]!=NULL;i++)
    {
      if(max<str[i])
      {
          max=str[i];
      }
    }
    printf("%c",max);
 return 0;   
}