#include <stdio.h>

int main()
{
    int a,b;
    char op;
    printf("Enter the expression");
    scanf("%d %c %d",&a,&op,&b);

    switch(op)
    {
        case '-' :
            printf("Answer =%d",a-b);
            break;

        case '*':
            printf("Answer =%d",a*b);
            break;
        case '/':
            printf("Answer=%d",a/b);
            break;
        
        default :
            printf("Invalid operator");
    }

    return 0;
}