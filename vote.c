#include<stdio.h>
#include<conio.h>
int main()
{
	int age;
	printf("Enter the age of a person");
	scanf("%d",&age);
	if(age>=18)
	 printf("\n Eligible for voting");
	else
	 printf("\n Not eligible for voting");
	getch();
	return 0;
}
