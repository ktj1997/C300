#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int main()
{
    char* pmem;
    pmem = malloc(100);

     /*
       동적으로 할당된 메모리의 크기를 아는 방법
       Window --> _msize()
       Unix/Linux --> malloc_usable_size()
     */

    if(pmem == NULL)
	puts("메모리 할당에 실패하였습니다");
    else{
        printf("할당된 메모리의 길이는 %ld 바이트 입니다.\n",malloc_usable_size(pmem));

	pmem = realloc(pmem,200);
	if(pmem == NULL)
	    puts("메모리 할당에 실패하였습니다.");
	else
	    printf("재할당된 메모리의 길이는 %ld 바이트 입니다. \n",malloc_usable_size(pmem));
    }

}
