#include<stdio.h>
#include<conio.h>
int swap(int a, int b);
int main()
{
    int a=1,b=2;
    printf("\n Before swapping, a=%d, b=%d", a,b);
    swap(a,b);
    getch();
}

int swap(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("\n After swapping, a=%d, b=%d", a, b);
    return swap;
}