#include<stdio.h>
#include<conio.h>
void main()
{long int a=0,b=1,c,i;
printf("%lu%lu",a,b);
for(i=1;i<500;i++)
{c=a+b;
a=b;
b=c;
printf("%lu\n",c);
}

getch();
}

