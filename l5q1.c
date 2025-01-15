#include<stdio.h>
#include<conio.h>
void main()
{int a,b,i,s=0;
printf("Enter two numbers:");
scanf("%d%d",&a,&b);
if(a>b)
{for(i=b;i<=a;i++)
{if(i%2==0)
{s=s+i;
}
}
}
if(b>a)
{for(i=a;i<=b;i++)
{if(i%2==0)
{s=s+i;
}
}
}
printf("The sum is %d",s);

getch();
}
