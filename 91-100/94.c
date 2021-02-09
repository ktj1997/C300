#include<stdio.h>
#include<ctype.h>
int main()
{
  char* string = "This is Korea";
  int cnt=0;

  while(*string){
     if(isspace(*string))
	 cnt++;
     string++;
  }
  printf("공백문자의 개수는 %d 입니다.\n",cnt);
}
