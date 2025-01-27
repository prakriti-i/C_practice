// WAP to read a character from keyboard and convert it into uppercase if its lowercase and vice versa
#include<stdio.h>
#include<conio.h>
int main()
{
	char c;
	printf("\n Enter a character");
	scanf("%c",&c);
	if(c>=65&&c<90)
	{
	   printf("\n The character is in uppercase");
	   c+=32;
	   printf("The equivalent lowercase character is %c",c);
    }
    else if(c>=97&&c<=122)
    {
    	printf("\n The character is in uppercase");
    	c-=32;
    	printf("\n The equivalent uppercase character is %c",c);
	}
	else
	{
		printf(" Invalid output");
	}
	getch();
	return 0;
	
}
