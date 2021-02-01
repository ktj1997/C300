#include<stdio.h>
#include<string.h>
void toUpperCase(char* string);
int main()
{
  char string[100];

  puts("문자열을 입력한 후 Enter키를 치세요!");
  puts("아무 문자도 입력하지 않으면 프로그램은 종료됩니다.");

  do{
      fgets(string,sizeof(string),stdin);
      string[strlen(string)-1]='\0';
      if(strlen(string) == 0)
	  break;

      toUpperCase(string);
      puts(string);
 }while(1);
}
void toUpperCase(char* string){ 
  for(int i=0;i<strlen(string);i++){
      if(97<=*(string+i) && *(string+i)<=122)
	  *(string+i) -= 32;
  }
}
/*
  strupr은 linux에서 제공되지 않는다.
*/
