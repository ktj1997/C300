#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
 char string[50]="Hello World";

 puts(string);

 memset(string,'\0',sizeof(string));
 memset(string,'*',sizeof(string)-1);
 puts(string);
}
