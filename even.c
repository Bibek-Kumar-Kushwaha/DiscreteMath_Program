//WAP to represent set an even number
#include <stdio.h>
int main()
{
 int n;
    printf("Enter Number of element in set: ");
    scanf("%d",&n);
    int a[n],i,b[n];
    printf("\nEnter Element of set\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i]%2==0)
            b[i]=1;
        else
            b[i]=0;

    }
    for(i=0; i<n; i++)
    {
        printf("%d\t",b[i]);
    }
}
