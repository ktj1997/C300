#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//stdlib.h 안의 swab함수가 실행이 안됨;;
void swab(char* string1,char*string2);
int main()
{
   char string1[] ="1a2b3c4d5e";
   char string2[] = "1q2w3e4r!!.";

   puts(string1);
   puts(string2);

   swab(string1,string2);

   puts(string1);
   puts(string2);
}
void swab(char* string1, char* string2){
  char* temp = (char*)malloc(sizeof(char)*100);
  strcpy(temp,string1);
  strcpy(string1,string2);
  strcpy(string2,temp);
}
