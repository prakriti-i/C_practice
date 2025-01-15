#include<stdio.h>
#include<math.h>
void main()
{int a,b,c,r1,r2,d;
printf("Enter the coefficients of a,b,c:");
scanf("%d%d%d",&a,&b,&c);
d=b*b-4*a*c;
if(d>=0)
{
r1=(-b+sqrt(d))/(2*a);
r1=(-b-sqrt(d))/(2*a);
printf("The roots are \n %d \t %d",r1,r2);}
else
{printf("Enter a correct equation");
}

getch();
}


