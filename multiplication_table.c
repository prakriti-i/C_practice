#include<stdio.h>
#include<conio.h>
int main()
{
	//Multiplication table from 5-10
	int i,j;
	for(i=5;i<=10;i++)
	 {
	 	for(j=1;j<=10;j++)
	 	 {
	 	 	printf("%dx%d=%d",i,j,i*j);
	 	 	printf("\t");
		  }
		printf("\n");
	 }
	 getch();
	 return 0;
}
