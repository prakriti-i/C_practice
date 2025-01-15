#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{int x,y=0,n,i;
printf("Enter the values of x and n");
scanf("%d%d",&x,&n);
for(i=1;i<=n;i++)
{y+=pow(x,i);
}
printf("The value of y is %d",y);
getch();
}

