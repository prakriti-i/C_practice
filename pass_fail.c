#include<stdio.h>
#include<conio.h>
int main()
{
    float p,c,m,e,b,r,t,per;
    printf("Enter marks in physics, chemistry, maths, english, biology");
    scanf("%f %f %f %f %f ", &p, &c, &m, &e, &b);
    t=p+c+m+e+b;
    printf("total marks is %f", t);
    per=(p+c+m+e+b)/5;
    printf("\n percentage is %f", per);
    if(per<40)
    printf("fail");
    else if(per>=40 && per<=55)
    printf("pass, third division");
    else if(per>55 && per<=65)
    printf("pass, second division");
    else if(per>65 && per<=80)
    printf("pass, first division");
    else if(per>80 && per<=95)
    printf("pass, distinction");
    else
    printf("pass, extra ordinary");
    getch();
}