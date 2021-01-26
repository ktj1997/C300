#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int bool;
typedef struct{
    int kor;
    int math;
}score;
int main()
{
  bool flag = TRUE;
  score sc;

  sc.kor = 20;
  sc.math = 50;

  if(flag)
   printf("TRUE \n");
  else
   printf("FALSE \n");

 printf("Kor = %d || Math = %d \n",sc.kor,sc.math);
}
