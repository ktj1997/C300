#include<stdio.h>
#include<stdlib.h>

int main()
{
  char* string1 = "2.1은 1.0보다 큽니다.";
  char* string2 = "1004.5는 천사.오 입니다.";
  char* string3 = "2005년도입니다.";
  double t1,t2,t3;

  puts(string1);
  puts(string2);
  puts(string3);

  t1 = atof(string1);
  t2 = atof(string2);
  t3 = atof(string3);

  printf("문자열을 숫자로 변환한 값: %f,%f,%f \n",t1,t2,t3);

}
