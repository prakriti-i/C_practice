#include<stdio.h>
#include<conio.h>
int main()
{
	float balance;
	char sex;
	printf("Enter the balance");
	scanf("%f",&balance);
	printf("\nEnter the gender either m/f");
	scanf("%c",&sex);
	if(sex=='f')
	 {
	 	if(balance>=5000)
	 	 {
	 	 	balance=balance+balance*0.05;
	 	 	
		  }
		else
		 {
		 	balance=balance+balance*0.02;
		 }
	 }
	else
	{
	 balance=balance+balance*0.02;
    }
	printf("\nThe balance after bonus is %f",balance);
	getch();
	return 0;
}
