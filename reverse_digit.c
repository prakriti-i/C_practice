#include<stdio.h>
#include<conio.h>
int main()
{
    int n, r,a=0;
    printf("Enter a number");
    scanf("%d", &n);
    printf("\n the number is %d",n);
    while(n!=0)
    {
    r=n%10;
    a=a*10+r;
    n=n/10;
    }
    printf(" \n reverse is %d", a);
    getch();
}