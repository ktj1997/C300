#include<stdio.h>
#include<stdlib.h>

int main()
{
  char* pmem;

  printf("sizeof(int)의 길이는 %ld 입니다. \n",sizeof(int));

  pmem = calloc(100,sizeof(int));

  if(pmem == NULL)
      puts("메모리 할당에 실패하였습니다.");
  else{
     puts("int형변수 100개 할당에 성공하였습니다.");
     printf("%ld \n",sizeof(pmem));
     free(pmem);
  }
}
