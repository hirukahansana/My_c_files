#include <stdio.h>

void arry_dec();
int arry_sum(int marks[][3],int rows);
int marks[2][3];

int main()
{
    int sum;
    arry_dec();
    sum=arry_sum(marks,2);
    printf("The sum is %d",sum);
    return 0;
}

void arry_dec()
{
    marks[2][3]={
        {1,2,3},
        {4,5,6}
    };
}

int arry_sum(int marks[][3],int rows)
{
    int sum;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<rows; j++)
        {
            sum+=marks[i][j];
        }
    }
    return sum;
}