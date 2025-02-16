#include<stdio.h>
#include<conio.h>
long fact(int n)
{
    long fact=1;
    int i;
    for(i=1; i<=n; i++)
    fact*=i;
    return fact;
}

int main()
{
    long f1=1, f2=1, f3=1, comb;
    int n,c,r;
    printf("Enter n and r \t");
    scanf("%d %d", &n, &r);
    f1=fact(n);
    f2=fact(n-r);
    f3=fact(r);
    comb=f1/(f2*f3);
    printf("\nThe combination is %d", comb);
    getch();
}