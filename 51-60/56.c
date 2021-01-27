#include<stdio.h>
#define KOREA "대한민국"
#define SUMMER "여름"
int main()
{
  const char* winter ="겨울";

  fputs(KOREA,stdout);
  fputs(SUMMER,stdout);
  fputs(winter,stdout);
}
