#include<stdio.h>
#include<conio.h>
int main()
{
	float n1,n2,prod;
	printf("Enter two numbers");
	scanf("%f %f",&n1,&n2);
	prod=n1*n2;
	if(prod>n1)
	 {
	 	if(prod>n2)
	 	 printf("Product=%.2f is greater than both n1 and n2",prod);
	 	else
	 	 printf("Product=%.2f is greater than  n1 but less than n2",prod);
	 }
	 else
	 {
	 	if(prod>n2)
	 	 printf("Product=%.2f is greater than n2 but less than n1",prod);
	 	else
	 	 printf("Product=%.2f is less than both n1 and n2",prod);
	 }
	getch();
	return 0;
	
}
