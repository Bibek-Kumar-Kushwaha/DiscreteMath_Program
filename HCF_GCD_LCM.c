//Write a program to find HCF/GCD and LCM
#include<stdio.h>
 void main()
 {
     int first,second,hcf,lcm,temp;
     printf("Enter first Number : ");
     scanf("%d",&first);
     printf("Enter second Number : ");
     scanf("%d",&second);
     temp = first * second;
     while(first!=second)
     {
    if(first>second)
    {
      first = first - second ;
    }
    else
    {
      second = second - first;
    }

     }

     lcm = temp/first;
    printf ("HCF or GCD = %d\n",first);
    printf ("LCM = %d\n",lcm);
 }
