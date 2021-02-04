#include<stdio.h>
int main()
{
  char cValue='a';
  int iValue=1234567;
  long lValue=7890123;
  float fValue=3.11592;
  char buffer[100];

 //sprintf는 buffer에 문자열을 저장하는 함수
 //매개변수가 있는 것들을 형식화함
 
 
  sprintf(buffer,"char형은 %c",cValue);
  puts(buffer);

  sprintf(buffer,",int형은 %d",iValue);
  puts(buffer);

  sprintf(buffer,"long형은 %ld",lValue);
  puts(buffer);

  sprintf(buffer,"float 형은 %f",fValue);


}
