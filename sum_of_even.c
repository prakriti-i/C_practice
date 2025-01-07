#include<stdio.h>
#include<conio.h>
int main()
{
    int i,a,b, sum=0;
    printf("Enter two numbers");
    scanf("%d %d", &a, &b);
    for(i=a; i<=b; i++)
    {
        if(i%2==0)
        sum=sum+i;
    }
    printf("sum is %d", sum);
    getch();
}