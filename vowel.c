#include <stdio.h>
#include <conio.h>
#include<string.h>
int main()
{
    char x,d;
    printf("enter an alphabet");
    scanf("%c", &x);
    d=tolower(x);
    if (d=='a'||d=='e'||d=='i'||d=='o'||d=='u')
    printf("vowel");
    else
    printf("consonant");
    getch();
}