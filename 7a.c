// wap to y=x++ + ++x (x=2,z=4)
#include <stdio.h>
#include <conio.h>
int main()
{
    int x = 2, z = 4;
    printf("%d ", x++ + ++x);
    getch();
}