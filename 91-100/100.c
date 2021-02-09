#include<stdio.h>
#include<string.h>

typedef struct {
   int x;
   int y;
   char buffer[30];
}tag;

int main()
{
  tag x1,x2;

  x1.x=5;
  x1.y=10;

  strcpy(x1.buffer,"memory Copy");
  memcpy(&x2,&x1,sizeof(x1));

  puts(x2.buffer);
}
