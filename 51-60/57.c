#include<stdio.h>
#include<string.h>
#define KOREA "대한민국"
int main()
{
   char* string1;
   char string2[100];

   /*
       char* strcpy(char* dest, const char* str);

       1)dest에 넘어가는 인자는 문자열 상수가 될 수 없다. --> 포인터 값이 내부에서 변경될 수 있기 때문
       2)dest에는 문자형 배열을 넣어주자
   */

   //strcpy(string1,KOREA);
   strcpy(string2,KOREA);
   strcpy(string2,"봄");

}
