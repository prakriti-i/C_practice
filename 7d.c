// wap to y=x>z?x:z(x=2,z=4)
#include <stdio.h>
#include <conio.h>
int main()
{
    int x = 2, z = 4;
    printf("%d ", (x > z) ? x : z);
    getch();
}