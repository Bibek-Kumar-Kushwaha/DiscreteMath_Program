/*wap using directive_graph perform following over graph
  a) Find common vertex
  b) how many vertex have more than 1 edges.
*/

#include<stdio.h>
 int search(int search_array[][2],int s1, int s2, int edges)
 {
   for(int i=0;i<edges;i++)
   {
    if(search_array[i][0]==s1 && search_array[i][1]==s2)
    {
     return 1;
    }
    else
    {
     return 0;
    }
   }
 }
 //
 void common_vertex(int a[],int edges)
 {
     int b[50],c=0;
     for(int i=0;i<edges;i++)
     {
         for(int j=0;j<edges;j++)
         {
             if(a[i]==a[j])
             {
                 b[c]=a[i];
                 c++;
                 break;
             }
         }
     }
     for(int i=0;i<c;i++)
     {
         printf("%d",b[i]);
     }
 }


 int main()
 {
  int edges, vertex;
  printf("Enter the total no. of edges in the graph : ");
  scanf("%d",&edges);
  printf("\nEnter the total no. of vertex in the graph : ");
  scanf("%d",&vertex);

  int edge_matrix[edges][2];
  int f_matrix[vertex][vertex];

  for (int i=0;i<edges;i++)
  {
      printf("Enter the direction of the edges : ");
      scanf("%d %d",&edge_matrix[i][0],&edge_matrix[i][1]);
  }

  for(int i=0;i<vertex;i++)
  {
      for(int j=0;j<vertex;j++)
      {
          if(search(edge_matrix,i+1,j+1,edges)==1)
          {
              f_matrix[i][j]=1;
          }
          else
          {
              f_matrix[i][j]=0;
          }
      }
  }
  for(int i=0;i<vertex;i++)
  {
      for(int j=0;j<vertex;j++)
      {
          printf("%d",f_matrix[i][j]);
      }
      printf("\n");
  }
  printf("The common vertices are : ");
  common_vertex(f_matrix,edges);
  printf("\nThose vertices have more than one edge : ");
  common_vertex(f_matrix,edges);

  return 0;

 }
