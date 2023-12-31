//WAP to represent set of prime number

#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number of element in set: ");
    scanf("%d",&n);
    int a[n],b[n],c=0,i,j,d;
    printf("\nEnter Element of set\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)

    {
        for(j=1; j<=a[i]; j++)
        {
            if(a[i]%j==0)
            {
                c=c+1;
            }

        if(c==2)
            b[i]=1;
        else
            b[i]=0;
            }
         c=0;

    }

    for(i=0; i<n; i++)
    {
        printf("%d\t",b[i]);
    }


}
}
