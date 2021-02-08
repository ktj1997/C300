#include<stdio.h>
#include<ctype.h>

int main()
{
  char* string = "Cat1 Car2 Cow3,...";
  char buffer[100] = {0,};
  int cnt=0;

  while(*string){
     if(isdigit(*string))
	 buffer[cnt++]=*string;
     string++;
  }
  puts(buffer);
}
