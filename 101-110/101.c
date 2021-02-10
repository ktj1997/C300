#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  char s1[100] = "123";
  char s2[100] = "123";

  strcpy(&s1[4],"abc");
  strcpy(&s2[4],"efg");

  /* strcmp는 null을 만나기 전까지만 비교하기 때문에, null값 이전의 123으로
     같지만 memcmp는 null값을 무시하고 모두 비교한다.
   */

  if(strcmp(s1,s2)==0)
      puts("strcmp: Buffer값이 동일합니다.");
  if(memcmp(s1,s2,7)==0)
      puts("memcmp: BUffer값이 동일합니다.");
  else
      puts("memcmp: Buffer값이 동일하지 않습니다.");
}
