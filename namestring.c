#include <stdio.h>
#include <string.h>

int main()
{
    char names[3][20];
    for(int i=0;i<5;i++)
    {
        printf("Enter your name: ");
        fgets(names[i],sizeof(names[i]),stdin);
        names[i][strcspn(names[i],"\n")]='\0';
    }

    for(int j=0;j<5;j++)
    {
        printf("Hello %s !\n",names[j]);
    }
    int length;
    length=strlen(names[1]);
    printf("Length of the first name is: %d",length);
}