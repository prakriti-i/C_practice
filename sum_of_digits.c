#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,r, sum=0;
    printf("Enter a numbers");
    scanf("%d", &n);
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("sum is %d", sum);
    getch();
}