#include <stdio.h>
#include <string.h>

int main()
{
    char name1[] = "Hiruka ";
    char name2[] = "Vithana";

    strcat(name1,name2);

    printf("Full name is %s", name1);
    return 0;
}