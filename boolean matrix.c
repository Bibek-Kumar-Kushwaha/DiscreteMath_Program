#include<stdio.h>
 int max(int a, int b)
 {
     if(a>b)
        return a;
     else
        return b;
 }
int min(int a, int b)
 {
     if(a<b)
        return a;
     else
        return b;
 }
 int oroperation(int p[3][3], int q[3][3], int m, int m)
 {
     int e[4][4];
     for(i=0;i<m;i++)
     {
         for(j=0;j<n;j++)
         {
             e[i][j]=max(p[i][j],q[i][j]);
         }
     }

 int andoperation(int p[3][3], int q[3][3], int m, int m)
 {
     int e[4][4];
     for(i=0;i<m;i++)
     {
         for(j=0;j<n;j++)
         {
             e[i][j]=min(p[i][j],q[i][j]);
         }
     }
 }
