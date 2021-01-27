#include<stdio.h>
#define ENTER 10
int main()
{
  int ch;
  printf("아스키 코드로 변환할 키를 누르세요 ... \n");
  printf("Enter 키를 누르면 프로그램은 종료됩니다 .. \n");

  do{
      ch = getchar();
      printf("문자 = %c ||ASCII = %d \n",ch,ch);
  }while(ch != ENTER);
}
