#include <stdio.h>
#include <conio.h>
#include<string.h>
int main()
{
    char x,d;
    printf("enter an alphabet");
    scanf("%c", &x);
    d=tolower(x);
    switch(d)
    {
    case'a':
    printf("vowel");
    break;
    case'e':
    printf("vowel");
    break;
    case'i':
    printf("vowel");
    break;
    case'o':
    printf("vowel");
    break;
    case'u':
    printf("vowel");
    break;
   defaukt:
    printf("consonant");
    getch();
}