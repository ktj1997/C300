#include<stdio.h>
#include<string.h>
#define SKY "sky"

int main()
{
  char string[100];
  int ret;

  printf("영단어를 입력한 후 Enter키를 치세요 \n");
  printf("sky를 입력하면 프로그램이 종료됩니다 \n");

  do{
     fgets(string,sizeof(string),stdin);
     string[strlen(string)-1]='\0';
     ret = strcmp(SKY,string);

     if(ret == 0){
        printf("%s = %s \n",string,SKY);
	break;
     }else if(ret>0)
       printf("%s > %s \n",string,SKY);
     else
	 printf("%s > %s \n",SKY,string);
  }while(1);
}
