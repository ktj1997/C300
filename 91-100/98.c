#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

#define MEGA 1024*1024

int main()
{
   int i=0;
   char* pmem;

   for(i=0;i<10;i++){
      pmem = malloc(MEGA);

      if(pmem == NULL)
	  puts("메모리 할당에 실패하였습니다");
      else{
         puts("메모리1MB를 할당하였습니다.\n");
	 free(pmem);
	 puts("메모리를 해제하였습니다.\n");
      }
   }
}
