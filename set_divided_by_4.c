//Wap to represent set a number which is divided by 4
#include<stdio.h>
 int main()
 {
 int n;
 printf("Enter number of element in set :");
 scanf("%d",&n);
 int a[n],i,b[n];
 printf("\nEnter Element of Set\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
  if(a[i]%4==0)
  {
  b[i]=1;
  }
  else
  {
  b[i]=0;
  }
  }
  printf("\n");
  for(i=0;i<n;i++)
  {
      printf("%d\t",b[i]);
  }
 }

