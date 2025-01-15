#include<stdio.h>
#include<conio.h>
void main()
{int a,b,c,g,s;
printf("Enter three numbers:");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
{g=a;
printf("%d is greatest\n",a);
}
else if(b>a && b>c)
{
g=b;
printf("%d is greatest\n",b);
}
else
{g=c;
printf("%d is greatest\n",c);
}
if(a<b && a<c)
{s=a;
printf("%d is smallest\n",a);
}
else if(b<a && b<c)
{s=b;
printf("%d is smallest\n",b);
}
else
{s=c;
printf("%d is smallest\n",c);
}
if(g%2==0)
{printf("Greatest number is even\n");
}
else
{printf("Greatest number is odd\n");
}
if(s%2==0)
{printf("Smallest number is even\n");
}
else
{printf("Smallest number is odd\n");
}
getch();

}
