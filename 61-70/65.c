#include<stdio.h>
#include<string.h>

#define FIND_CHAR 'h'

int main()
{
  char string[100];
  char* ret;

  puts("문자열을 입력한후 Enter키를 치세요! \n");
  puts("문자열 중에 'h'가 포함되어 있으면, 프로그램이 종료됩니다.\n");

  do{
    fgets(string,sizeof(string),stdin);
    string[strlen(string)-1]='\0';
    ret=strchr(string,FIND_CHAR);

    if(ret == NULL)
	puts("문자열중에 'h' 가 없습니다.\n");
    else{
       printf("%d 위치에 'h'문자를 찾았습니다. \n",(int)(ret-string));
       break;
    }
  }while(1);
}
