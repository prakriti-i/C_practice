#include<stdio.h>
#include<conio.h>
void main()
{int n;
printf("Enter a number:");
scanf("%d",&n);
if(n%5==0 && n%7==0 && n%11!=0)
{printf("It is multiple of 5, divisible by 7 and not by 11");
}
else
{printf("It is not multiple of 5, divisible by 7 and not by 11");
}
getch();
}
