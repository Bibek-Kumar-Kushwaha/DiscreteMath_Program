//Wap to create a sequence i.e 2^0 2^2 2^4 2^6 ............
#include<stdio.h>
 int seq(int n)
 {
     if(n==1)
        return 1;
     else
        return (seq(n-1)*4);
 }
 int main()
 {
     int a,i;
     printf("Enter term of sequence : ");
     scanf("%d",&a);
     for(i=1;i<=a;i++)
     {
         printf("%d\t",seq(i));
     }
     return 0;
 }
