#include<stdio.h>
#include<conio.h>
int main()
{
	float bill,units;
	printf("Enter how many units");
	scanf("%f",&units);
	if(units<=20)
	 bill=80;
	else if(units>20 && units<=120)
	 bill=80+100*7.30;
	else
	bill=9*units;
	printf("The bill amount is Rs.%f",bill);
	getch();
	return 0;
}
