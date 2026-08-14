#include <stdio.h>

void size_array(int *x,int *y);
void get_array(int c,int d,int name[c][d]);
void show_array(int e,int f,int name[e][f]);

int main()
{
    int n,m;
    size_array(&n,&m);
    int stu_marks[m][n];
    get_array(m,n,stu_marks);
    show_array(m,n,stu_marks);
    return 0;
}

void size_array(int *x,int *y)
{
    printf("Enter the number of columns: ");
    scanf("%d",x);
    printf("Enter the number of rows: ");
    scanf("%d",y);
}

void get_array( int c, int d ,int name[c][d])
{
    for(int i=0; i<c; i++)
    {
        for(int j=0; j<d; j++ )
        {
            printf("Enter the value of row: %d,column :%d ",i+1,j+1);
            scanf("%d",&name[i][j]);
        }

    }
}

void show_array(int e,int f,int name[e][f])
{
    printf("Here is your array:\n\n");
    for(int i=0; i<e;i++)
    {
        for(int j=0;j<f;j++)
        {
            
            printf("%d ",name[i][j]);    
        }
        printf("\n");
    }   
}

