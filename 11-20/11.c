#include<stdio.h>
int main()
{
   char ch;
   unsigned char j;
   char k;

   ch=200;
   j=200;
   k='a';
   

   /*
      char의 범위는 -128~127 즉 OverFlow로 인해서
     -128+(200-127 + 1) ==> -56

      unsigned char ==> 0~255의 범위

      a ==> ASCII CODE 97
   */
   printf("문자형변수 ch의 값은 %d \n",ch);
   printf("문자형변수 j의 값은 %d \n",j);
   printf("문자형변수 ch의 값은 %d \n",k);

}
