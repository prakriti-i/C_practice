
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<string.h>
#define dashes "-------------------------------------------------------"
void BuddhaAirline();
void YetiAirline();
void TaraAirline();
void ShreeAirline();
void SimrikAirline();
void booking();
char ch[10][130]={"Buddha Airlines","Yeti Airlines","Tara Airlines","Shree Airlines","Simrik Airlines"};
void airlines();
void status();


int main()
{
	//HOME PAGE
	printf("\n\n\n\n\n\n\n\n\t\t\t\t\tWELCOME TO THE AIRLINE TICKET BOOKING SYSTEM");
	printf("\n\n\t\t\t\t\tPRESS ANY KEY TO CONTINUE");

	int choice;
	char username1[100];
	char password1[50];
	char username2[100];
	char password2[50];
	char password3[50];
	system("cls");
	//LOGIN AND SIGN UP PAGE
	printf("\nChoose 1 for login and 2 for signup to an account:\n");
	scanf("%d",&choice);
	system("CLS");
	switch(choice)
	{
		case 1:
			//LOGIN PAGE
			printf("WELCOME TO LOGIN Section\n");
			printf("\n"dashes"\n");
			printf("\nEnter your username\n");
			scanf("%s",username1);
			printf("\nEnter your password\n");
			scanf("%s",password1);
			printf("\n"dashes"\n");
			printf("\nYou are logged in!!");
			break;
		case 2:
			//SIGN UP PAGE
			printf("WELCOME TO SIGNUP Section\n");
			printf("\n"dashes"\n");
			printf("\nPlease fill the following details:\n");
			printf("\nUsername:\n");
			scanf("%s",username2);
			printf("\nSet a password:\n");
			scanf("%s",password2);
			printf("\nConfirm password:\n");
			scanf("%s",password3);
			printf("\nYou are signed up!");
			break;
		default:
			printf("\nYou have exited the program");
	}
   getch();	
   system("CLS");
   
//MAIN MENU SECTION
int num;
printf("   ==========  MAIN MENU  ==========\n\n"); 
printf("   [1] View Airlines List\n\n"); 
printf("   [2] Ticket Booking\n\n"); 
printf("   [3] Status of Airlines \n\n"); 
printf("   [4] Exit\n\n");
printf("   =================================\n"); 
printf("   ENTER YOUR CHOICE: "); 
scanf("%d",&num); 

switch(num) 
{ 
case 1: 
airlines();//for list of airlines 
break; 
case 2: 
booking();//for booking the tickets 
break; 
case 3: 
status(); //for checking status of airlines
break; 
case 4:

system("CLS"); 
printf("\n\n==========================================================\n"); 
printf("  THANK YOU FOR USING THIS AIRLINE TICKET BOOKING SYSTEM"); 
printf("\n==========================================================\n"); 
printf("  By Group 5 from BCT081 (Anuska Acharya, Nitu Purbey, Prakriti Subedi, Sulochana Subedi)   \n\n\n"); 
break;
default:
printf("  Invalid input. Please try again.\n");
}
return 0;
}

//AIRLINE LISTS SECTION
void airlines() 
{ 
system("cls"); 
printf("\n\n\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n"); 
printf("\t\t\t\t\t\t\t AIRLINE TICKET BOOKING SYSTEM"); 
printf("\n\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n"); 
printf("   ==========  AIRLINES LIST  =========== \n\n"); 
printf("   [1]  =>  %s\n\n",ch[0]); 
printf("   [2]  =>  %s\n\n",ch[1]); 
printf("   [3]  =>  %s\n\n",ch[2]); 
printf("   [4]  =>  %s\n\n",ch[3]); 
printf("   [5]  =>  %s\n\n",ch[4]); 
printf("\n"dashes"\n");
printf("Thank you for viewing airline list.");
}
    
void status()
{
	//STATUS SECTION
	system("CLS");
    printf("WELCOME TO Status Section\n");
	printf("\n"dashes"\n");	
	int choice;
	printf("\nChoose:\n[1] Buddha Airlines\n[2] Yeti Airlines\n[3] Tara Airlines\n[4] Shree Airlines\n[5] Simrik Airlines");
	printf("\nPlease enter your airline choice:\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			system("CLS");
			printf("\nWelcome to Buddha Airlines!");
			printf("\n"dashes"\n");
			printf("\nThe story of Buddha Air begins with a maiden flight to the top of the world on a Beechcraft 1900D on 11 October 1997");
			printf("\nSince then, we have grown to be the largest and longest operating privately owned domestic airlines of Nepal.");
			printf("\n"dashes"\n");
            printf("Thank you for checking our status.");
			break;
	
	    case 2:
	    	system("CLS");
	    	printf("\nWelcome to Yeti Airlines!");
	    	printf("\n"dashes"\n");
			printf("\nThe story of Yeti Air begins with a commercial flight in September, 1998 with a single Canadian built DHC6 300 Twin Otter Aircraft.");
			printf("\nSince then, we have grown to be one of the largest and longest operating privately owned domestic airlines of Nepal.");
			printf("\n"dashes"\n");
            printf("Thank you for checking our status.");
			break;
			
		case 3:
			system("CLS");
			printf("\nWelcome to Tara Airlines!");
			printf("\n"dashes"\n");
			printf("\nThe story of Tara Air begins with a flight in October 3,2007 with a DHC-6/300 aircraft.");
			printf("\nSince then, we have grown to be one of the largest and longest operating privately owned domestic airlines of Nepal.");
			printf("\n"dashes"\n");
            printf("Thank you for checking our status.");
			break;
			
		case 4:
			system("CLS");
			printf("\nWelcome to Shree Airlines!");
			printf("\n"dashes"\n");
			printf("\nThe story of Shree Air begins with CRJ aircraft on 1999");
			printf("\nSince then, we have grown to be one of the largest and longest operating privately owned domestic airlines of Nepal.");
			printf("\n"dashes"\n");
            printf("Thank you for checking our status.");
			break;
			
		case 5:
			system("CLS");
			printf("\nWelcome to Simrik Airlines!");
			printf("\n"dashes"\n");
			printf("\nThe story of Simrik Air begins with a commercial flight in 2001");
			printf("\nSince then, we have grown to be one of the largest and longest operating privately owned domestic airlines of Nepal.");
			printf("\n"dashes"\n");
            printf("Thank you for checking our status.");
			break;
			
		default:
			printf("\nThe airlines you have chosen doesnt exist");
		
	}	
}


void booking()
{
	//BOOKING SECTION
	system("CLS");
	printf("WELCOME TO Booking Section\n");
	printf("\n"dashes"\n");	
	int airlinechoice;
	printf("Choice:\n[1] Buddha Airline\n[2] Yeti Airline\n[3] Tara Airline\n[4] Shree Airline\n[5] Simrik Airline\n");
	printf("Please Enter your airline choice:\n");
	scanf("%d", &airlinechoice);
	system("CLS");	
	if(airlinechoice==1)
	BuddhaAirline();
	else if(airlinechoice==2)
	YetiAirline();
	else if(airlinechoice==3)
	TaraAirline();
    else if(airlinechoice==4)
	ShreeAirline();
	else if(airlinechoice==5)
	SimrikAirline();
	else
	printf("Sorry! Result not found");
}

void BuddhaAirline()
{
	printf("Welcome to Ticket Booking Section of Buddha Airline!\n");
	printf(dashes);
	printf("\nSeat details\n");
	printf(dashes);
	printf("\n");
	FILE *f1;
	char name[100];
	int seatno;
	f1=fopen("Buddha.txt", "r");
	if(f1==NULL)
	{
	f1=fopen("Buddha.txt","w");	
	int i;
	for(i=1; i<=30; i++)
	{
		fprintf(f1, "[%d]Empty\t", i);
	}
	fclose(f1);
}
else{
	fclose(f1);
}

    int count=0;
	f1=fopen("Buddha.txt", "r");
	while(fscanf(f1, "[%d]%s\t", &seatno, name)!=EOF)
	{
		if(seatno==5||seatno==9||seatno==13||seatno==17||seatno==21||seatno==25||seatno==29)
		printf("\n");
		printf("[%d]%s\t", seatno, name);
		if(strcmp(name, "Empty")==0)
		{
			count++;
		}
	}
	fclose(f1);
	
	label:
		printf("\n"dashes"\n");
		printf("Available seats: %d", count);
	    printf("\n"dashes"\n");
        printf("Please fill the details:");
        printf("\n"dashes"\n");
		printf("Enter seat no to book:\n");
	    scanf("%d", &seatno);
		printf("Enter your name:\n");
		scanf("%s", name);
		FILE *f2;
		f1=fopen("Buddha.txt", "r");
		f2=fopen("temp.txt", "w");
		int tempseat;
		char tempname[100];
		while(fscanf(f1, "[%d]%s\t", &tempseat, tempname)!=EOF)
		{
			if(tempseat==seatno)
			{
				fprintf(f2, "[%d]%s\t", tempseat, name);
			}
			else
			{
				fprintf(f2, "[%d]%s\t", tempseat, tempname);
			}
		}
		fclose(f1);
		fclose(f2);
		remove("Buddha.txt");
		rename("temp.txt", "Buddha.txt");
		system("CLS");
		printf("Welcome to Ticket Booking Section of Buddha Airline!\n");
	printf(dashes);
	printf("\nSeat details\n");
	printf(dashes);
	printf("\n");
	f1=fopen("Buddha.txt","r");
	while(fscanf(f1, "[%d]%s\t", &tempseat, tempname)!=EOF)
	{
		if(tempseat==5||tempseat==9||tempseat==13||tempseat==17||tempseat==21||tempseat==25||tempseat==29)
		printf("\n");
		printf("[%d]%s\t", tempseat, tempname);
	}
	fclose(f1);
	char c;
	printf("\nDo you want to book more?(y/n)\n");
	scanf(" %c", &c);
	if(c=='y'||c=='y')
	{
	count--;
	goto label;
   }
   else
   printf("\nThank you for Booking!!");
}
	
void YetiAirline()
{
	printf("Welcome to Ticket Booking Section of Yeti Airline!\n");
	printf(dashes);
	printf("\nSeat details\n");
	printf(dashes);
	printf("\n");
	FILE *f1;
	char name[100];
	int seatno;
	f1=fopen("yeti.txt", "r");
	if(f1==NULL)
	{
	f1=fopen("yeti.txt","w");	
	int i;
	for(i=1; i<=30; i++)
	{
		fprintf(f1, "[%d]Empty\t", i);
	}
	fclose(f1);
}
else{
	fclose(f1);
}

    int count=0;
	f1=fopen("yeti.txt", "r");
	while(fscanf(f1, "[%d]%s\t", &seatno, name)!=EOF)
	{
		if(seatno==5||seatno==9||seatno==13||seatno==17||seatno==21||seatno==25||seatno==29)
		printf("\n");
		printf("[%d]%s\t", seatno, name);
		if(strcmp(name, "Empty")==0)
		{
			count++;
		}
	}
	fclose(f1);
	
	label:
		printf("\n"dashes"\n");
		printf("Available seats: %d", count);
	    printf("\n"dashes"\n");
        printf("Please fill the details:");
        printf("\n"dashes"\n");
		printf("Enter seat no to book:\n");
	    scanf("%d", &seatno);
		printf("Enter your name:\n");
		scanf("%s", name);
		FILE *f2;
		f1=fopen("yeti.txt", "r");
		f2=fopen("temp.txt", "w");
		int tempseat;
		char tempname[100];
		while(fscanf(f1, "[%d]%s\t", &tempseat, tempname)!=EOF)
		{
			if(tempseat==seatno)
			{
				fprintf(f2, "[%d]%s\t", tempseat, name);
			}
			else
			{
				fprintf(f2, "[%d]%s\t", tempseat, tempname);
			}
		}
		fclose(f1);
		fclose(f2);
		remove("yeti.txt");
		rename("temp.txt", "yeti.txt");
		system("CLS");
		printf("Welcome to Ticket Booking Section of Yeti Airline!\n");
	printf(dashes);
	printf("\nSeat details\n");
	printf(dashes);
	printf("\n");
	f1=fopen("yeti.txt","r");
	while(fscanf(f1, "[%d]%s\t", &tempseat, tempname)!=EOF)
	{
		if(tempseat==5||tempseat==9||tempseat==13||tempseat==17||tempseat==21||tempseat==25||tempseat==29)
		printf("\n");
		printf("[%d]%s\t", tempseat, tempname);
	}
	fclose(f1);
	char c;
	printf("\nDo you want to book more?(y/n)\n");
	scanf(" %c", &c);
	if(c=='y'||c=='y')
	{
	count--;
	goto label;
   }
   else
   printf("\nThank you for Booking!!");
}

void TaraAirline()
{
	printf("Welcome to Ticket Booking Section of Tara Airline!\n");
	printf(dashes);
	printf("\nSeat details\n");
	printf(dashes);
	printf("\n");
	FILE *f1;
	char name[100];
	int seatno;
	f1=fopen("tara.txt", "r");
	if(f1==NULL)
	{
	f1=fopen("tara.txt","w");	
	int i;
	for(i=1; i<=30; i++)
	{
		fprintf(f1, "[%d]Empty\t", i);
	}
	fclose(f1);
}
else{
	fclose(f1);
}

    int count=0;
	f1=fopen("tara.txt", "r");
	while(fscanf(f1, "[%d]%s\t", &seatno, name)!=EOF)
	{
		if(seatno==5||seatno==9||seatno==13||seatno==17||seatno==21||seatno==25||seatno==29)
		printf("\n");
		printf("[%d]%s\t", seatno, name);
		if(strcmp(name, "Empty")==0)
		{
			count++;
		}
	}
	fclose(f1);
	
	label:
		printf("\n"dashes"\n");
		printf("Available seats: %d", count);
	    printf("\n"dashes"\n");
        printf("Please fill the details:");
        printf("\n"dashes"\n");
		printf("Enter seat no to book:\n");
	    scanf("%d", &seatno);
		printf("Enter your name:\n");
		scanf("%s", name);
		FILE *f2;
		f1=fopen("tara.txt", "r");
		f2=fopen("temp.txt", "w");
		int tempseat;
		char tempname[100];
		while(fscanf(f1, "[%d]%s\t", &tempseat, tempname)!=EOF)
		{
			if(tempseat==seatno)
			{
				fprintf(f2, "[%d]%s\t", tempseat, name);
			}
			else
			{
				fprintf(f2, "[%d]%s\t", tempseat, tempname);
			}
		}
		fclose(f1);
		fclose(f2);
		remove("tara.txt");
		rename("temp.txt", "tara.txt");
		system("CLS");
		printf("Welcome to Ticket Booking Section of Tara Airline!\n");
	printf(dashes);
	printf("\nSeat details\n");
	printf(dashes);
	printf("\n");
	f1=fopen("tara.txt","r");
	while(fscanf(f1, "[%d]%s\t", &tempseat, tempname)!=EOF)
	{
		if(tempseat==5||tempseat==9||tempseat==13||tempseat==17||tempseat==21||tempseat==25||tempseat==29)
		printf("\n");
		printf("[%d]%s\t", tempseat, tempname);
	}
	fclose(f1);
	char c;
	printf("\nDo you want to book more?(y/n)\n");
	scanf(" %c", &c);
	if(c=='y'||c=='y')
	{
	count--;
	goto label;
   }
   else
   printf("\nThank you for Booking!!");
}

void ShreeAirline()
{
	printf("Welcome to Ticket Booking Section of Shree Airline!\n");
	printf(dashes);
	printf("\nSeat details\n");
	printf(dashes);
	printf("\n");
	FILE *f1;
	char name[100];
	int seatno;
	f1=fopen("shree.txt", "r");
	if(f1==NULL)
	{
	f1=fopen("shree.txt","w");	
	int i;
	for(i=1; i<=30; i++)
	{
		fprintf(f1, "[%d]Empty\t", i);
	}
	fclose(f1);
}
else{
	fclose(f1);
}

    int count=0;
	f1=fopen("shree.txt", "r");
	while(fscanf(f1, "[%d]%s\t", &seatno, name)!=EOF)
	{
		if(seatno==5||seatno==9||seatno==13||seatno==17||seatno==21||seatno==25||seatno==29)
		printf("\n");
		printf("[%d]%s\t", seatno, name);
		if(strcmp(name, "Empty")==0)
		{
			count++;
		}
	}
	fclose(f1);
	
	label:
		printf("\n"dashes"\n");
		printf("Available seats: %d", count);
	    printf("\n"dashes"\n");
        printf("Please fill the details:");
        printf("\n"dashes"\n");
		printf("Enter seat no to book:\n");
	    scanf("%d", &seatno);
		printf("Enter your name:\n");
		scanf("%s", name);
		FILE *f2;
		f1=fopen("shree.txt", "r");
		f2=fopen("temp.txt", "w");
		int tempseat;
		char tempname[100];
		while(fscanf(f1, "[%d]%s\t", &tempseat, tempname)!=EOF)
		{
			if(tempseat==seatno)
			{
				fprintf(f2, "[%d]%s\t", tempseat, name);
			}
			else
			{
				fprintf(f2, "[%d]%s\t", tempseat, tempname);
			}
		}
		fclose(f1);
		fclose(f2);
		remove("shree.txt");
		rename("temp.txt", "shree.txt");
		system("CLS");
		printf("Welcome to Ticket Booking Section of Shree Airline!\n");
	printf(dashes);
	printf("\nSeat details\n");
	printf(dashes);
	printf("\n");
	f1=fopen("shree.txt","r");
	while(fscanf(f1, "[%d]%s\t", &tempseat, tempname)!=EOF)
	{
		if(tempseat==5||tempseat==9||tempseat==13||tempseat==17||tempseat==21||tempseat==25||tempseat==29)
		printf("\n");
		printf("[%d]%s\t", tempseat, tempname);
	}
	fclose(f1);
	char c;
	printf("\nDo you want to book more?(y/n)\n");
	scanf(" %c", &c);
	if(c=='y'||c=='y')
	{
	count--;
	goto label;
   }
   else
   printf("\nThank you for Booking!!");
}

void SimrikAirline()
{
	printf("Welcome to Ticket Booking Section of Simrik Airline!\n");
	printf(dashes);
	printf("\nSeat details\n");
	printf(dashes);
	printf("\n");
	FILE *f1;
	char name[100];
	int seatno;
	f1=fopen("simrik.txt", "r");
	if(f1==NULL)
	{
	f1=fopen("simrik.txt","w");	
	int i;
	for(i=1; i<=30; i++)
	{
		fprintf(f1, "[%d]Empty\t", i);
	}
	fclose(f1);
}
else{
	fclose(f1);
}

    int count=0;
	f1=fopen("simrik.txt", "r");
	while(fscanf(f1, "[%d]%s\t", &seatno, name)!=EOF)
	{
		if(seatno==5||seatno==9||seatno==13||seatno==17||seatno==21||seatno==25||seatno==29)
		printf("\n");
		printf("[%d]%s\t", seatno, name);
		if(strcmp(name, "Empty")==0)
		{
			count++;
		}
	}
	fclose(f1);
	
	label:
		printf("\n"dashes"\n");
		printf("Available seats: %d", count);
	    printf("\n"dashes"\n");
        printf("Please fill the details:");
        printf("\n"dashes"\n");
		printf("Enter seat no to book:\n");
	    scanf("%d", &seatno);
		printf("Enter your name:\n");
		scanf("%s", name);
		FILE *f2;
		f1=fopen("simrik.txt", "r");
		f2=fopen("temp.txt", "w");
		int tempseat;
		char tempname[100];
		while(fscanf(f1, "[%d]%s\t", &tempseat, tempname)!=EOF)
		{
			if(tempseat==seatno)
			{
				fprintf(f2, "[%d]%s\t", tempseat, name);
			}
			else
			{
				fprintf(f2, "[%d]%s\t", tempseat, tempname);
			}
		}
		fclose(f1);
		fclose(f2);
		remove("simrik.txt");
		rename("temp.txt", "simrik.txt");
		system("CLS");
		printf("Welcome to Ticket Booking Section of Simrik Airline!\n");
	printf(dashes);
	printf("\nSeat details\n");
	printf(dashes);
	printf("\n");
	f1=fopen("simrik.txt","r");
	while(fscanf(f1, "[%d]%s\t", &tempseat, tempname)!=EOF)
	{
		if(tempseat==5||tempseat==9||tempseat==13||tempseat==17||tempseat==21||tempseat==25||tempseat==29)
		printf("\n");
		printf("[%d]%s\t", tempseat, tempname);
	}
	fclose(f1);
	char c;
	printf("\nDo you want to book more?(y/n)\n");
	scanf(" %c", &c);
	if(c=='y'||c=='y')
	{
	count--;
	goto label;
   }
   else
   printf("\nThank you for Booking!!");
}

