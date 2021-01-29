#include<stdio.h>
#include<string.h>
int main()
{
  char string1[100];
  char string2[100];

  printf("첫번째 단어를 입력하세요 \n");
  fgets(string1,sizeof(string1),stdin);
  string1[strlen(string1)-1]='\0';
  
  printf("두번째 단어를 입력하세요 \n");
  fgets(string2,sizeof(string2),stdin);
  string2[strlen(string2)-1]='\0';

  strcat(string1,string2);
  puts(string1);

}
