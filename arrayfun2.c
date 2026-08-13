#include <stdio.h>

void display(char values[],int size);

int main()
{
    char values[3]={'a','b','c'};
    display(values,3);
}

void display(char values[],int size)
{
    for(int i =0; i<size;i++)
    {
        printf(" %c",values[i]);
    }
}