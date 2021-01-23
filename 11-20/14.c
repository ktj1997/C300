#include<stdio.h>
int main()
{
  int b;
  int j;

  b = 10>5;
  j = 10>20;

  /*
	C언어에는 boolean 자료형이 없기때문에,
	int형을 사용해야한다.
  */


  printf("논리형 변수 b의 값은 %d \n",b);
  printf("논리형 변수 j의 값은 %d \n",j);

}
