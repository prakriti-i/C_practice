#include <stdio.h>
#include <conio.h>
int main()
{
    int x = 6, y = 3;
    printf(" %c %7c %18s %16s \n", 'x', 'y', "expression", "result");
    printf("%d %3c %4d %4c %8s %11c %6s %d \n", x, '|', y, '|', "x=y+3", '|', "x=", y + 3);
    printf("%d %3c %4d %4c %8s %11c %6s %d \n", x, '|', y, '|', "x=y-2", '|', "x=", y - 2);
    printf("%d %3c %4d %4c %8s %11c %6s %d \n", x, '|', y, '|', "x=y*5", '|', "x=", y * 5);
    printf("%d %3c %4d %4c %8s %11c %6s %d \n", x, '|', y, '|', "x=x/y", '|', "x=", x / y);
    printf("%d %3c %4d %4c %8s %11c %6s %d \n", x, '|', y, '|', "x=x%y", '|', "x=", x % y);
 getch();
}