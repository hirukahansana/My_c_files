#include <stdio.h>

int main()
{
    char marks[20];
    printf("Enter your name: ");
    fgets(marks,sizeof(marks),stdin);
    printf("%s !",marks);
}