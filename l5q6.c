#include<stdio.h>
#include<conio.h>
void main()

{int n,f=1,i;
printf("Enter a number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{f=f*i;
}
printf("factorial is %d",f);
getch();
}

