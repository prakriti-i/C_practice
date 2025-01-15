#include<stdio.h>
#include<conio.h>
void main()
{float p,c,m,e,b,t,per;
printf("Enter the marks of five subjects where total marks is 100:");
scanf("%f%f%f%f%f",&p,&c,&m,&e,&b);
t=p+c+m+e+b;
per=t/5;
if(per<40)
{printf("Fail");
}
else if(per>40 && per<55)
{printf("Third division");
}
else if(per>55 && per<65)
{printf("Second division");
}
else if(per>65 && per<80)
{printf("First division");
}
else
{printf("Distinction");
}
getch();
}
