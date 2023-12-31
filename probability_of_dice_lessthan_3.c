//WAP to find probability of getting a number less than 3 by throwing a dice
#include<stdio.h>
#include<conio.h>
 int main()
 {
     int sides = 6;
     int need = 2;
     float probability = (float)need/sides;
     printf("The Probability of getting a number of less than 3 after throwing a dice is %.2f\t",probability);
     getch();
     return 0;

 }
