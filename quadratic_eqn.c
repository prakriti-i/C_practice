#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a,b,c,d, r1, r2;
    printf("Enter the coefficients a,b,c ");
    scanf("%d %d %d", &a, &b, &c);
    d=(b*b)-4*a*c;
    if(d>=0)
    {
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("\nthe square roots are %d and %d",r1,r2);
     }
     else 
     printf("\n invalid eqn");
    getch();
}