#include<stdio.h>
int main()
{
   unsigned char ch = 255, mask = 0x7f;

   printf("%d \n",ch);
   //두개 중 하나라도 0 이면 0
   printf("%d \n",ch &mask);
  // ~ : 비트값 반전
   printf("%d \n",(char)~ch);
   //두 bit 중 하나만 참이어야 참
   printf("%d \n",ch^ch);
   // >> : n비트 씩 오른쪽
   printf("%d \n",ch>>1);
   // << : n비트 씩 왼쪽
   printf("%d \n",mask<<1);
}
