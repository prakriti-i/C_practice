#include<stdio.h>
#include<conio.h>
void main()
{char c,d;
printf("Enter a character:");
scanf("%c",&c);
d=tolower(c);
if(d=='a'||d=='e'||d=='i'||d=='o'||d=='u')
{printf("The character is vowel");
}
else
{printf("The character is consonant");
}
getch();
}
