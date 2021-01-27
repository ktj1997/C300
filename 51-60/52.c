#include<stdio.h>
int print(char* string);
int main()
{
  print("This is a putchar Function \n");
 
}
int print(char* string){
   int len = 0;
   while(*string != '\0'){
      putchar(*string);
      string++;
      len++;
   }
   return len;
}
