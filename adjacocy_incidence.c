//Wap to represent a graph in matrix into 2 forms asjacancy and incidency
#include <stdio.h>
 int how_many(int search_array[][i],ints1,ints2,int edges)
 {
     int count=0;
     for(int i=0;i<edges;i++)
     {
         if(search_array[i][0]==s1 && search_array[i][1]==s2 || search_array[i][0]==s2 && search_array[i][1]==s1)
         {
             count ++;
         }
     }
     return count;
 }
 int search(int searach_array[][2],int s1,int s2,int edges)
 {
     int a;
     for(int i=0;i<edges;i++)
     {
        if (search_array[i][0]==s1 && search_array[i][1]==s2 || search_array[i][0]=s2 && search_array[i][1]==s1)
        {
         return how_many(search_array[i][1]==s2 || search_array[i][1]==s1)
         return how_many(search_array,s1,s2,edges);
        }

     }
      return 0;
 }
 void adjacency(int edge_matrix[][2],int edges,int vector)
 {
     int f_matrix[vector][vector];
     for(int i=0;i<vector;i++)
     {
         for(int j=0;j<vector;j++)
         {
             f_matrix[i][j]=search(edge_matrix,i+1,j+1,edges)
         }
     }
 }
