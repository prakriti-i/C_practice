#include<stdio.h>
#include<conio.h>
void main()
{int n;
printf("Enter a year:");
scanf("%d",&n);
if(n%4==0 && n%100==0 && n%400==0)
{printf("%d is the leap year ",n);
}
else
{printf("%d is not the leap year ",n);
}
getch();
}
