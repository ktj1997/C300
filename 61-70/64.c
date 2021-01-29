#include<stdio.h>
#include<string.h>

#define SKY "sky"

int main()
{
  char string[100];
  char* ret;

  puts("문자열을 입력한 후 ENter키를 치세요! \n");
  puts("문자열 중에 sky가 포함되어 있으면, 프로그램은 종료됩니다. \n");

  /*
    strstr은 시작지점의 메모리번지를 리턴
    ---> 리턴값 - 시작점 -->index
  */

  do{
    fgets(string,sizeof(string),stdin);
    ret = strstr(string,SKY);

    if(ret == NULL)
	printf("문자열중에 %s가 없습니다. \n",SKY);
    else{
	printf("%d위치에 %s 문자열을 찾았습니다. \n",(int)(ret-string),SKY);
    	break;
    }
  }while(1);
}
