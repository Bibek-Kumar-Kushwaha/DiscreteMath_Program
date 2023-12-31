//WAP to find Nagation in boolean matrix
#include<stdio.h>
int pro(int x)
{
    printf("%d\t",x);
}

int main()
{
    int row1,col1;
    printf("\nEnter Row of first matrix : ");
    scanf("%d",&row1);
    printf("\nEnter Column of first matrix : ");
    scanf("%d",&col1);
    int i,j,a[row1][col1];


    printf("Enter element of first matrix \n");
    for(i=0; i<row1; i++)
    {
        for(j=0; j<col1; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf(" FIRST MATRIX\n");
    for(i=0; i<row1; i++)
    {
        for(j=0; j<col1; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }


    printf("\nNegation Operation\n");
    for(i=0; i<row1; i++)
    {
        for(j=0; j<col1; j++)
        {
            if(a[i][j]==1)
             pro(0);
            else
             pro(1);
        }
        printf("\n");
    }

}

