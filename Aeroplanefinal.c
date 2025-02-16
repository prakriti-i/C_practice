// This is built by BCT 081 Batch
// The members of this group are Anuska Acharya, Sulochana Subedi, Nitu Purvey and Prakriti Subedi.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	printf("\n\n\n\n\n\n\n\n\t\t\t\t\tWELCOME TO THE AIRLINE TICKET BOOKING SYSTEM");
	printf("\n\n\t\t\t\t\tPRESS ANY KEY TO CONTINUE");
	getch();
	int choice;
	char username1[100];
	char password1[50];
	char username2[100];
	char password2[50];
	char password3[50];
	system("cls");
	printf("\n Choose 1 for login and 2 for signup to an account ");
	scanf("%d",&choice);
	//Match the case with choice
	switch(choice)
	{
		case 1:
			printf("\nEnter your username");
			scanf("%s",username1);
			printf("\n Enter your password");
			scanf("%s",password1);
			printf("\n You are logged in!!");
			break;
		case 2:
			printf("\nPlease fill the following details:");
			printf("\n Username:");
			scanf("%s",username2);
			printf("\n Set a password:");
			scanf("%s",password2);
			printf("\n Confirm password:");
			scanf("%s",password3);
			printf("\n You are signed up!");
			break;
		default:
			printf("\nYou have exited the program");
	}
	system("cls");
	int airlinechoice;
	printf("\n Choose: \n1.Buddha Airlines\n 2.Yeti Airlines\n 3.Tara Airlines\n 4.Shree Airlines\n 5.Simrik Airlines");
	scanf("%d",&airlinechoice);
	switch(airlinechoice)
	{
		case 1:
			printf("\n Welcome to Buddha Airlines!");
			printf("\nThe story of Buddha Air begins with a maiden flight to the top of the world on a Beechcraft 1900D on 11 October 1997");
			printf("\nSince then, we have grown to be the largest and longest operating privately owned domestic airlines of Nepal.");
			break;
	
	    case 2:
	    	printf("\n Welcome to Yeti Airlines!");
			printf("\nThe story of Yeti Air begins with a commercial flight in September, 1998 with a single Canadian built DHC6 300 Twin Otter Aircraft.");
			printf("\nSince then, we have grown to be one of the largest and longest operating privately owned domestic airlines of Nepal.");
			break;
		case 3:
			printf("\n Welcome to Tara Airlines!");
			printf("\nThe story of Tara Air begins with a flight in October 3,2007 with a DHC-6/300 aircraft.");
			printf("\nSince then, we have grown to be one of the largest and longest operating privately owned domestic airlines of Nepal.");
			break;
		case 4:
			printf("\n Welcome to Shree Airlines!");
			printf("\nThe story of Shree Air begins with CRJ aircraft on 1999");
			printf("\nSince then, we have grown to be one of the largest and longest operating privately owned domestic airlines of Nepal.");
			break;
		case 5:
			printf("\n Welcome to Simrik Airlines!");
			printf("\nThe story of Simrik Air begins with a commercial flight in 2001");
			printf("\nSince then, we have grown to be one of the largest and longest operating privately owned domestic airlines of Nepal.");
			break;
		default:
			printf("\n The airlines you have chosen doesnt exist");
		
	}
	    
	
	
	getch();
	return 0;
	
	
	
}

