#include<stdio.h>
int main()
{
   int i=100;
   int j=1000;
   int k=12345;

   printf("[%d] \n",i);
   printf("[%d] \n",j);
   printf("[%d] \n",k);

   
   printf("[%5d] \n",i);
   printf("[%5d] \n",i);
   printf("[%5d] \n",i);
  
   printf("[%10d] \n",i);
   printf("[%10d] \n",i);
   printf("[%10d] \n",i);
   
   printf("[%-10d] \n",i);
   printf("[%-10d] \n",i);
   printf("[%-10d] \n",i);
}
