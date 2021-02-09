#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MEMORY "MEMORY"

int main()
{
 char* pmem;
 pmem = malloc(100);

 if(pmem == NULL)
     puts("메모리 할당에 실패했습니다.\n");
 else{
     strcpy(pmem,MEMORY);
     puts(pmem);
     free(pmem);
 }
     
}
