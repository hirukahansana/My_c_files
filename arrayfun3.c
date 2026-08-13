#include <stdio.h>

void user(int*n);
void calarray(int name[],int n);
void showarray(int arry[],int m);

int main()
{
    int size;
    user(&size);
    int values[size]={};
    calarray(values,size);
    showarray(values,size);
    return 0;
}

void user(int *n)
{
    printf("Enter the array size: ");
    scanf("%d",n);
}

void calarray(int name[],int n)
{
    for(int i=0; i<n; i++)
    {
        int n;
        printf("Enter value no.%d: ",i+1);
        scanf("%d",&name[i]);
    }
}

void showarray(int arry[],int m)
{
    for(int j=0; j<m; j++)
    {
        printf("Array value no.%d is %d\n",j+1,arry[j]);
    }
}
