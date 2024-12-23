#include<stdio.h>
#include<conio.h>
int main()
{
    char a;
    printf("enter a character");
    scanf("%c",&a);
    if(isalnum(a)==1)
    {
        printf("%c is alphanumeric",a);
    }
    elesif(isblank(a)==1)
    {
        printf("%c is blank",a);
    }
    elseif(isalpha(a)==1)
    {
        printf("%c is alpha",a);
    }
    
}