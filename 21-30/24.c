#include<stdio.h>
int main()
{
   int x = 1;
   printf("x = %d \n",x++); //1
   printf("x = %d \n",x++); //2
   printf("x = %d \n",++x); //4
   printf("x = %d \n",x--); //4
   printf("x = %d \n",x--); //3
   printf("x = %d \n",--x); //1
}
