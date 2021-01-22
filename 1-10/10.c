#include<stdio.h> //include문에는 ; 필요없다.
#define PI 3.141592 //#define에도 필요없다.

int main()
{
  /*
    컴파일러는 문법오류 검출
    링커는 여러개의 목적코드를 묶어서 하나의 실행파일로 만들기 가능
  */
  int i=0; //변수의 선언에는 ;가붙어야됨
   if(PI != 0) //if에 ; 안붙여도됨
    printf("%f가 정의되어있습니다. \n",PI);
  
  for(i=1;i<=10;i++) //for문에 ; 안붙어도됨.
      printf("%f \n",i*PI);
}

