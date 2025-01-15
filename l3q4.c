#include<stdio.h>
#include<conio.h>
void main()
{int n,r,a=0;
printf("Enter a number:");
scanf("%d",&n);
while(n!=0)
{r=n%10;
a=a*10+r;
n=n/10;
}
printf("The original number is %d",n);
printf("The reverse is %d",a);
getch();
}
