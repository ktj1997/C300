#include<stdio.h>
#include<string.h>
int count(char* str);
int main( )
{
   char string[100];
   fgets(string,sizeof(string),stdin);

   if(*string != '\0')
       printf("문자 a의 개수는 %d개입니다. \n",count(string));

   /*
      gets는 safe 하지 않아서, fgets사용
      fgets(char* Buffer,int size, FILE* stream);
   */
}
int count(char* str){
  int cnt = 0;
  while(*str != '\0'){
    if(*str++ =='a') cnt++;
  }
  return cnt;
}
