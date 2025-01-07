#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    if(n%5==0 && n%7==0 && n%11!=0)
    printf("divisible by 5 and 7 but not by 11");
    else
     printf(" not divisible by 5 and 7 but not by 11");
    getch();
}