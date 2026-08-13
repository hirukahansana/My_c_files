#include <stdio.h>

int main()
{
    char ch;
    int count=0;
    ch=getchar();
    while (ch != EOF)
    {
        putchar(ch);
        printf("\n");
        count++;
        printf("%d",ch);
        ch=getchar();
        
    }
    printf("The number of letters passed= %d",count);
    
    return 0;
}