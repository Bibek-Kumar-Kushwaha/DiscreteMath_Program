#include<iostream>
#include<conio.h>
 class rectangle
  {
   private:
      int length;
      int breadth;
   public:
      void setdata(int l,int b)
      {
         length=l;
         breadth=b;
      }
      void showdata()
      {
        cout<<"Length="<<length<<endl<<"Breadth="<<breadth<<endl;
      }
      int findarea()
      {
       return length*breadth;
      }
  }
