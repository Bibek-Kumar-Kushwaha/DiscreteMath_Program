//WAP to find probability of getting same number on rolling two dice
#include<stdio.h>
#include<conio.h>
 int main()
 {
     int possible_outcomes = 36;
     int favourable_outcome = 6;
     float probability = (float)possible_outcomes/favourable_outcome;
     printf("The Probability of getting same number on rolling two dice is %.2f\t",probability);
     getch();
     return 0;

 }

