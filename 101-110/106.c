#include<stdio.h>
/*
  32bit 컴퓨터에서는 4Byte
  64bit 컴퓨터에서는 8Byte
*/
int main()
{
  char* pchar;
  short* pshort;
  int* pint;
  long* plong;
  float* pfloat;
  double* pdouble;

  printf("char형 포인터의 크기: %ld \n",sizeof(pchar));
  printf("short형 포인터의 크기: %ld \n",sizeof(pshort));
  printf("int형 포인터의 크기: %ld \n",sizeof(pint));
  printf("long형 포인터의 크기: %ld \n",sizeof(plong));
  printf("float형 포인터의 크기: %ld \n",sizeof(pfloat));
  printf("double형 포인터의 크기: %ld \n",sizeof(pdouble));
}
