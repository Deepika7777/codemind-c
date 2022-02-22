#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,c=0,k=0,x=0,y=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
        {
            c++;
        }
        else if(str[i]==' ')
        {
            k++;
        }
        else if(str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9'||str[i]=='0')
        {
            x++;
        }
        else
        { 
            y++;
        }
    }
    printf("Vowels: %d
",c);
    printf("Consonants: %d
",y);
    printf("Digits: %d
",x);
    printf("White spaces: %d
",k);
    return 0;
}