#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b,c, greatest,s;
    printf("Enter three numbers");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b && a>c)
   { printf("\n %d is greatest",a);
    greatest=a;}
    else if(b>a && b>c)
    {greatest=b;
    printf("\n %d is greatest",b);}
    else
    {printf("\n %d is greatest",c);
    greatest=c;}
    if(a<b && a<c)
    {printf("\n %d is smallest",a);
    s=a;}
    else if(b<a && b<c)
    {printf("\n %d is smallest",b);
    s=b;}
    else
    {printf("\n %d is smallest",c);
    s=c;}
     if(greatest%2==0)
    printf("greatest is even");
    else
    printf("greatest is odd");
     if(s%2==0)
    printf("smallest is even");
    else
    printf("smallest is odd");
    getch();
}