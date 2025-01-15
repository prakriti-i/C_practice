#include<stdio.h>
#include<conio.h>
int fac(int);
void main()
{float x,y=1,n,i;

for(i=1;i<10;i++)
{y+=(i*i)/fac(i);
}
printf("The value of y is %f",y);


getch();
}
int fac(int i)
{int f=1,j;
for(j=1;j<=i;j++)
{f=f*j;
}
return f;
}

