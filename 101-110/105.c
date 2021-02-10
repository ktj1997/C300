#include<stdio.h>
#include<string.h>

char s[20] ="1234567890";

void My_Memmove(void* dest, void* src, unsigned int count);
int main()
{
  puts(s);
  My_Memmove(s+4,s+2,6);
  puts(s);
}
void My_Memmove(void* dest, void* src, unsigned int count){
  if(dest <= src || (char*)dest >=((char*)src+count)){
     while(count--){
         *(char*)dest = *(char*)src;
	 dest = (char*)dest+1;
	 src = (char*)src+1;
     }
  }else{
         dest = (char*)dest+count-1;
	 src = (char*)src+count-1;
     while(count --){
         *(char*)dest = *(char*)src;
	 dest = (char*)dest-1;
	 src = (char*)src-1;
     }
  }
}
