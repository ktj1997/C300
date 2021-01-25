#include<stdio.h>
#define ASCII_BEGIN 0
#define ASCII_END 255

int main()
{
  int i=0;

  for(i = ASCII_BEGIN;i<=ASCII_END;i++)
      printf("ASCII (%3d), 문자 = %c \n",i,i);
}
