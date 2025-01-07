#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,i,lcm,hcf,temp;
    printf("Enter two numbers");
    scanf("%d %d", &c, &d);
    a=c;
    b=d;
    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    hcf=a;
    lcm=(c*d)/hcf;
    printf("\n lcm is %d and hcf is %d",lcm,hcf);
    getch();
}