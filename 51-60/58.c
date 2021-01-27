#include<stdio.h>
#define KOREA "대한민국"

char* My_strcpy(char* dest, const char* src);
int main()
{
  char string[100];

  My_strcpy(string,KOREA);
  fputs(string,stdout);
}
char* My_strcpy(char* dest, const char* src){
   if(dest == NULL || src == NULL)
       return NULL;
   else
       do{
         *dest++ = *src++;
       }while(*src != '\0');
   return dest;
}
