#include<stdio.h>
#define MAX(a,b) a>b?a:b
#define MIN(a,b) a<b?a:b
/*
  메크로는 컴파일러에 의해서 알맞게 변경
*/
int main( )
{ 
   int i=5,j=8;

   printf("MAX = %d \n",MAX(i,j));
   printf("MIN = %d \n",MIN(i,j));
}
