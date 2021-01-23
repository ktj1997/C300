#include<stdio.h>
int main()
{
  int i;
  unsigned int j;
  int k;

  i = 2000000000;
  j = 4000000000;
  k ='b';

  /*
	unsigned int ==> %u
	int ==> %d -2^31~2^31-1
	 -->당연히 Char형 변수의 범위안에 들어가있기 때문에 저장가능
  */

  printf("정수형 변수 i의 값은 %d \n",i);
  printf("정수형 변수 j의 값은 %u \n",j);
  printf("정수형 변수 k의 값은 %d \n",k);
}
