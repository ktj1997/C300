#include<stdio.h>
#include<string.h>
#define SKY "sky"
int main()
{
  char string[100];
  int ret;

  printf("영단어를 입력하세요 \n");
  printf("sky로 시작되는 단어를 입력하면 입력이 종료됩니다 \n");

   /*
    strncmp  n--> 비교할 바이트 수
    
    int strncmp(const char* strc1, const char* str2, unsigned int count);
   */

  do{
    fgets(string,sizeof(string),stdin);
    string[strlen(string)-1]='\0';
    ret = strncmp(string,SKY,strlen(SKY));
    
    if(ret == 0){
      printf("%3.3s == %s, ret = %d \n",string,SKY,ret);
      break;
    }else if(ret > 0)
      printf("%s > %s \n",string,SKY);
    else
      printf("%s < %s \n",string,SKY);
  }while(1);

}
