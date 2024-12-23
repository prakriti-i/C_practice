#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    char b;
    printf("enter a number");
    scanf("%d", &a);
    printf("enter a character");
    scanf(" %c", &b);
    printf(" number is %d and character is %c", a,b);
    getch();
}