#include <stdio.h>

int main()
{
    char name[7]={'H','i','r','u','k','a'};
    char city[]="Colombo";
    char city2[]={'C','o','l','o','m','b','o','Q','\0'};
    printf("%s\n",name);
    printf("%s\n",city);
    printf("%s",city2);
    return 0;
}

