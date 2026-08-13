#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c",&ch);

    if (isalpha(ch))
    {
        if (islower(ch))
        {
            printf("This is lowercase character");
        }
        else
        {
            printf("This is uppercase character");
        }
    }
    else
    {
        if (ispunct(ch))
        {
            printf("This is punct");
        }
        else if (isdigit(ch))
        {
            printf("This is an integer");
        }
    }
return 0;
}