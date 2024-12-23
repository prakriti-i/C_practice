#include<stdio.h>
#include<conio.h>
#define plus +
#define minus - 
#define mult * 
#define divide / 
int main ()
{
    int a,b,s,p,m,d;
    char choice;
    printf("enter two numbers");
    scanf("%d %d", &a, &b);
    printf("enter e for sum, f for product, g for subtraction, h for division");
    scanf(" %c", &choice);
    switch(choice)
    {
    case 'e':
    s=a plus b;
    printf("\n sum is %d",s);
    break;
    case 'f':
    p=a mult b;
     printf("\n product is %d",p);
    break;
    case 'g':
    m=a minus b;
     printf("\n subtraction is %d",m);
    break;
    case 'h':
    d=a divide b;
    printf("\n 1 division is %d",d);
    break;
    default:
    printf("invalid");
    }
    getch();
}