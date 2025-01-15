#include<stdio.h>
#include<conio.h>
void main()
{int a,b,c,d,lcm,hcf,temp;
printf("Enter two number");
scanf("%d %d",&c,&d);
a=c;
b=d;
while(b!=0)
{temp=b;
b=a%b;
a=temp;
}
hcf=a;
lcm=(c*d)/hcf;
printf("The lcm is %d and hcf is %d",lcm,hcf);
getch();
}



