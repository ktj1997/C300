#include<stdio.h>
#include<stdlib.h>

int main()
{
  char* string1 ="2는 1보다 큽니다.";
  char* string2 = "1004는 천사입니다.";
  char* string3 = "2016년도 입니다.";
  char* string4 = "오늘은 6월 9일입니다.";

  long t1,t2,t3,t4;

  /*
    atol은 변환되는 값이 없으면 0을리턴
    atoi와 공통점은 +,-,숫자,공백 등만 인식 가능
    나머지가 나올경우 실패
  */
  puts(string1);
  puts(string2);
  puts(string3);
  puts(string4);

  t1 = atol(string1);
  t2 = atol(string2);
  t3 = atol(string3);
  t4 = atol(string4);

  printf("문자열을 숫자로 변환한 값: %ld,%ld,%ld,%ld \n",t1,t2,t3,t4);
  printf("총합은 %ld 입니다. \n",t1+t2+t3+t4);

}
