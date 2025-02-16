#include<stdio.h>
#include<conio.h>
void main()
{char c,d;
printf("Enter a character:");
scanf("%c",&c);
d=tolower(c);
switch(d)
{case 'a':
printf("Vowel");
break;
case 'e':
printf("Vowel");
break;
case 'i':
printf("Vowel");
break;
case 'o':
printf("Vowel");
break;
case 'u':
printf("Vowel");
break;
default:
	printf("consonant");
}
getch();

}
