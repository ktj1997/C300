#include<stdio.h>

int length(char* pstr);
int main()
{
   char* str = "Hello";
   printf("%d \n",length(str));
}
int length(char* pstr)
{
   int len=0;
   while(*pstr != '\0')
   {
     pstr++;
     len++;
   }
   return len;

}
