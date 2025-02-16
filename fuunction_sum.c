#include<stdio.h>
#include<conio.h>
void sum()
{
    int a,b, sum;
    printf("Enter two numbers");
    scanf("%d %d", &a, &b);
    sum=a+b;
    printf("\n The sum is %d", sum);
}

int main()
{
    sum();
   
}