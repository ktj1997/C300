#include<stdio.h>
int print(char* string);
int main()
{
  print("This is a Custom Funciont \n");
}
int print(char* string){
   int len =0;
   while(*string != '\0'){
      printf("%c",*string);
      string++;
      len++;
   }
   return len;
}
