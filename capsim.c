#include <stdio.h>

int main()
{
    char ch;
    ch=getchar(ch);
    if (ch>= 'A' && ch<='Z' )
    {
        printf("This is a capital letter");
    }
    else
    {
        printf("This is a simple ltter");
    }
    return 0;
}