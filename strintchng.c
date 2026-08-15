#include <stdio.h>
#include <string.h>

int main()
{
    char name[]="Hiruka";
    char desti[4];

    strcpy(desti,name);
    printf("%s",desti);
    return 0;
}