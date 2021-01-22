#include<stdio.h>
int main()
{
  //UTF-8은 한글 3Byte, euc-kr은 2Byte
  char str[] = "대한민국"; //2*len + 1
  char* str2 ="대한민국"; // 32bit -->4Byte && 64bit --> 8Byte
  printf("%s \n",str);
  printf("Array =  %lu \n",sizeof(str));
  printf("Pointer = %lu \n",sizeof(str2));
}
