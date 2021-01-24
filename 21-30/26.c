#include<stdio.h>
int main()
{
   int x = 5;
   int y = 2;

   if(x>0 && x< 10)
       printf("0<x<10 \n");
   if(x<0 || y ==2)
       printf("y == 2 OR x <0 \n");

   if(!(x>y))
       printf("y>x \n");
}
