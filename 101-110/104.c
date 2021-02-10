#include<stdio.h>
#include<string.h>
typedef struct{
  int x;
  int y;
  char buffer[30];
}tag;
void My_Memcpy(void* dest, const void* src, unsigned int count);
int main()
{

   tag x1,x2;

   x1.x=5;
   x1.y=10;
   strcpy(x1.buffer,"MemoryCopy");

   My_Memcpy(&x2,&x1,sizeof(x1));
   puts(x2.buffer);
}
void My_Memcpy(void* dest,const void* src, unsigned int count){
   while(count --){
      *(char*)dest = *(char*)src;
      dest = (char*)dest+1;
      src = (char*)src+1;
   }
}
