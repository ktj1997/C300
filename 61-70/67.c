#include<stdio.h>
#include<string.h>

int main()
{
 char* string ="this is very good !";
 char* strCharSet ="abcdefghijklmnopqrstuvwxyz ";
 unsigned int pos;
 
 //공백도 포함한다! 포함되지 않는 첫문자의 위치 리턴
 pos = strspn(string,strCharSet);

 puts(string);
 puts(strCharSet);

 printf("%d 위치에 일치되지 않는 문자를 발견하였습니다. \n",pos);
}
