#include<stdio.h>
#include<conio.h>
int main()
{
	int num1,num2,i,product=0;
	printf("Enter two numbers");
	scanf("%d %d",&num1,&num2);
	for(i=1;i<=num2;i++)
	{
		product=product+num1;
	}
	printf("Product of %d and %d is %d",num1,num2,product);
	getch();
	return 0;
}
