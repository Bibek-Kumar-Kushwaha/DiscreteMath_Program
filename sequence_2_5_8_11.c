//Wap to create a sequence i.e 2 5 8 11 ............
#include<stdio.h>
 int seq(int n)
 {
     if(n==1)
        return 2;
     else
        return (seq(n-1)+3);
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
