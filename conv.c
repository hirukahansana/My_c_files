#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch,upper_ch;
    printf("Enter a character: ");
    scanf(" %c",&ch);

    upper_ch=toupper(ch);

    printf("The upper case character is %c",upper_ch);
}