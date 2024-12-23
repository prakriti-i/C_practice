// wap to y=x>>z+z<<1(x=2,z=4)
#include <stdio.h>
#include <conio.h>
int main()
{
    int x = 2, z = 4;
    printf("%d ", x >> z + z << 1);
    printf("%d", ~x);
    getch();
}