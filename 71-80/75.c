#include<stdio.h>
#include<string.h>
#include<malloc.h>

int main()
{
   char string[100];
   char* pstr;

   puts("문자열을 입력한 후 Enter키를 치세요 !");
   puts("아무 문자도 입력하지 않으면 프로그램은 종료됩니다!");

   do{
     fgets(string,sizeof(string),stdin);
     string[strlen(string)-1]='\0';

     pstr=strdup(string);
     strcpy(string,"temporary String");

     printf("문자열 string: %s \n",string);
     printf("문자열 pstr: %s \n",pstr);
   }while(1);
}
/*
  strdup는 내부적으로 Malloc사용
*/
