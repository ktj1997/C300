#include<stdio.h>
#include<ctype.h>
int main()
{
  char* string = "Cat 1 Car2 Cow 3...";
  char buffer[100] = {0,};
  int cnt=0;

  while(*string){
    if(isalpha(*string))
       buffer[cnt++]=*string;
    string++;
  }
  puts(buffer);
}
