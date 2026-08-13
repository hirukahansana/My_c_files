#include <stdio.h>

int main()
{
    int marks[5]={10,20,30,40,50};
    

    for(int i=0;i<=4;i++)
    {
        printf("Enter your marks: ");
        scanf("%d",&marks[i]);
    }
    printf("%d",marks[3]);
    return 0;
}