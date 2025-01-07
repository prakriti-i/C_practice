#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int i, x, y=0, n;
    printf("Enter the value of x and n");
    scanf("%d %d", &x, &n);
    for(i=1; i<=n; i++)
    {
        y+=pow(x,i);
    }
    printf("value of y is %d",y);
    getch();
}