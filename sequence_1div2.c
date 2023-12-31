//Wap to create a sequence i.e 1/2 1/5 1/8 1/11 ............
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
         printf("1/%d\t",seq(i));
     }
     return 0;
 }
