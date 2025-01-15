#include<stdio.h>
#include<conio.h>
void main()

{int a,r,s=0;
printf("Enter a number:");
scanf("%d",&a);
while(a!=0)
{r=a%10;
s=s+r;
a=a/10;

}
printf("The sum is %d",s);
getch();
}
