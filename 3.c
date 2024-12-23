#include<stdio.h>
#include<conio.h>
int main()
{
    float x,y,z,A,B,C;
    x=3.0, y=12.5, z=523.3;
    A=300.0, B=1200.5, C=5300.3;
    printf("%c %3c %4s %7.1f %c %8.1f %c %8.1f %c\n",'X','y',"z=",x,'|',y,'|',z,'|');
    printf("%c %3c %4s %7.1f %c %8.1f %c %8.1f %c\n",'A','B',"C=",A,'|',B,'|',C,'|');

    printf(".............................................\n");

    printf("%c %3c %4s %c %7.2f %c %8.2f %c %8.2f \n",'X','y',"z=",'|',x,'|',y,'|',z);
    printf("%c %3c %4s %c %7.2f %c %8.2f %c %8.2f \n",'A','B',"C=",'|',A,'|',B,'|',C);
    getch();
} 