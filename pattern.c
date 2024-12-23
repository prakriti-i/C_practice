#include<stdio.h>
#include<conio.h>
int main()
{
    int k,a,i,j,l;
        for(a=5;a>=1;a--)
        {
           
            for(i=1; i<=a; i++)
            printf("%d\t",i);
             for(k=i; k<=5;k++)
            printf(" ");
            for(j=a-1; j>=1; j--)
            printf("%d\t",j);
            printf("\n");
        }
    
}
    