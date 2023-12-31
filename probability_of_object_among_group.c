//WAP to find probability of finding an object among a group of objects
 #include<stdio.h>
  float probability(int g,int h)
  {
      float prob = (float)g/h;
      return prob;

  }
  int main()
  {
      int g,h;
      printf("Enter total number of objects in group : ");
      scanf("%d",&g);
      printf("\nEnter number of object you want to find : ");
      scanf("%d",&h);
      float prob = probability(g,h);
      printf("The probability of finding on %d objects among %d object is : %.3f\n",g,h,prob);
      getch();
      return 0;
  }
