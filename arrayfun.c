#include <stdio.h>

void display(int values[],int size);

int main()
{
    int values[5] = {10,20,30,40,50};
    display(values,5);
}

void display (int values[] , int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d\n",values[i]);
    }
}