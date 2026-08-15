#include <stdio.h>
#include <string.h>

int main()
{
    char marks[20];

    printf("Enter your name: ");

    fgets(marks,sizeof(marks),stdin);
    marks[strcspn(marks,"\n")]= '\0';

    printf("%s !",marks);
}