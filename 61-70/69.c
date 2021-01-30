#include<stdio.h>
#include<string.h>

#define TOKEN " " 
int main()
{
  char string[100];
  char* pos;

  puts("문자열을 입력한 후 Enter키를 치세요!");
  fgets(string,sizeof(string),stdin);

  //strpbrk --> 구분자를 포함한 문자열을 리턴 && 그 이전꺼는 포함x
   pos = strpbrk(string,TOKEN);

  while(pos != NULL){
    puts(pos++);
    pos = strpbrk(pos,TOKEN);
  }
}
