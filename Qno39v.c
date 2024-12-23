#include <stdio.h>
#include<conio.h>
int main()
{
   int n, flag= 15;
   printf("Enter a number:");
   scanf("%d",&n);
   for(;n%2==0;)
   {
    printf("The number is EVEN");
    flag=0;
    break;
   }
   for(;flag;)
   {
    printf("The number is ODD");
    break;
   }
    getch();
    return 0;
}