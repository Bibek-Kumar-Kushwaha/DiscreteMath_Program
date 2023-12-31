//WAP to find AND & OR operation in boolean matrix
#include<stdio.h>
//AND Operation
int min(int x,int y)
{

    if(x<y)
        printf("%d",x);
    else
        printf("%d",y);
}
//OR operation
int max(int x,int y)
{

    if(x>y)
        printf("%d",x);
    else
        printf("%d",y);

}
//PRODUCT
int pro(int x)
{
    printf("%d",x);
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

    printf("\nAND Operation\n");
    for(i=0; i<row1; i++)
    {
        for(j=0; j<col1; j++)
        {
            //call min
            min(a[i][j],b[i][j]);
            printf("\t");
        }
        printf("\n");
    }

    printf("\nOR Operation\n");
    for(i=0; i<row1; i++)
    {
        for(j=0; j<col1; j++)
        {
            //call max
            max(a[i][j],b[i][j]);
            printf("\t");
        }
        printf("\n");
    }
       }
    //for product
    int d;
    if(row1==col2 && row2 == col1)
    {

    printf("\nProduct \n");
       for(i=0; i<row1; i++)
    {
        for(j=0; j<col1; j++)
        {
               d=a[i][j]*b[j][i];
                pro(d);
                printf("\t");

        }
        printf("\n");
    }

    }
}

