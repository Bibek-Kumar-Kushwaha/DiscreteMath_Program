
//WAP to find AND & OR operation in boolean matrix
#include<stdio.h>
//if and only if
int only(int x)
{
    printf("%d\t",x);
}

int main()
{
    int row1,col1,row2,col2;
    printf("\nEnter Row of first matrix : ");
    scanf("%d",&row1);
    printf("\nEnter Column of first matrix : ");
    scanf("%d",&col1);
    printf("\nEnter Row of second matrix : ");
    scanf("%d",&row2);
    printf("\nEnter Column of second matrix : ");
    scanf("%d",&col2);
    int i,j,a[row1][col1],b[row2][col2];


    printf("Enter element of first matrix \n");
    for(i=0; i<row1; i++)
    {
        for(j=0; j<col1; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter element of second matrix \n");
    for(i=0; i<row2; i++)
    {
        for(j=0; j<col2; j++)
        {
            scanf("%d",&b[i][j]);
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

    printf(" SECOND MATRIX\n");
    for(i=0; i<row2; i++)
    {
        for(j=0; j<col2; j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    if(row1==row2 && col1==col2)
    {

        printf("\nIf and Only If\n");
        for(i=0; i<row1; i++)
        {
            for(j=0; j<col1; j++)
            {
                if(a[i][j]==1 && b[i][j]==1 || a[i][j]==0 && b[i][j]==0)
                    only(1);
                else
                    only(0);

            }
            printf("\n");
        }

    }
}
