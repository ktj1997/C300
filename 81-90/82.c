#include<stdio.h>
#include<stdlib.h>

int main()
{
  char* string = "1.234E-10";
  char* stop;
  double value;

  // stop은 변환하다가 중간에 멈추는 포인터
  value = strtod(string,&stop);
  printf("%ld개의 문자가 변환되었습니다. \n",stop-string);
  printf("문자열 [%s]를 숫자로 변환하면 %E입ㄴ다.\n",string,value);

}
