#include<stdio.h>
#include<string.h>
int main()
{
  char string[100];

  puts("문자열을 입력한 후 Enter키를 치세요!");
  puts("아무 문자도 입력하지 않으며 종료됩니다!");

  //strset은 Standard C Function이 아니다. memset사용하자
  do{
    fgets(string,sizeof(string),stdin);
    string[strlen(string)-1]='\0';
    if(strlen(string) == 0)
	break;
    memset(string,string[0],strlen(string));
    puts(string);
  }while(1);
}
