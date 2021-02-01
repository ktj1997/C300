#include<stdio.h>
#include<string.h>
void reverse(char string[]);
int main()
{
   char string[100];

   puts("영단어를 입력한 후 Enter키를 치세요!");
   puts("아무 문자도 입력하지 않으면 프로그램은 종료됩니다!");
   
   do{ 
       fgets(string,sizeof(string),stdin);
       string[strlen(string)-1]='\0';

       if(strlen(string) == 0)
	   break;
	reverse(string);
	puts(string);

   }while(1);
}
void reverse(char string[]){
  int end = strlen(string)-1,mid=end/2;
  for(int i=0;i<mid;i++){
    char temp = string[i];
    string[i] = string[end-i];
    string[end-i]=temp;
 }
}
/*
  strrev함수 제공 x
*/
