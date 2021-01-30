#include<stdio.h>
#include<string.h>
#define TOKEN " "
int main()
{
  char string[100];
  char* token;

  puts("문자열을 입력한 후 Enter키를 치세요.\n");
  fgets(string,sizeof(string),stdin);

  token = strtok(string,TOKEN);

  while(token != NULL){
    puts(token);
    token = strtok(NULL,TOKEN);
  }

  //strtok에 NULL을 넘겨주면 검색된 위치부터 자동으로 다음위치 검색

}
