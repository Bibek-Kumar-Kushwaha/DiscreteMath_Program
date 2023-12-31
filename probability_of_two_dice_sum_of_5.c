//WAP to find probability of getting a sum of 5 on rolling two dice
#include<stdio.h>
#include<conio.h>
 int main()
 {
     int possible = 36;
     int favourable = 4;
     float probability = (float)favourable/possible;
     printf("The Probability of getting a same number on rolling two dice is %.2f\t",probability);
     getch();
     return 0;

 }


