#include <stdio.h>

int main()
{
    char ch;
    int count=0;
    ch=getchar();
    while (ch != '#')
    {
        putchar(ch);
        count ++;
        ch = getchar();
    }
    
    printf("%d of characters  went through",count);
    return 0;
}