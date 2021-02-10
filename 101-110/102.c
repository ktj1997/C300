#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*
  void* memmove(void* buffer1, void* buffer2, int count);
  buffer2를 buffer1으로 count만큼 옮김

  memcpy보다 안전한 방법이 memmove
*/

int main()
{
   char s1[20] ="1234567890";
   char s2[20] ="1234567890";

   puts(s1);
   memcpy(s1+4,s1+2,5);
   puts(s1);

   puts(s2);
   memmove(s2+4,s2+2,5);
   puts(s2);
}

