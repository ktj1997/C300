#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
  int count;
  int total=0;
  char string[100];

  //숫자값만 읽기 가능하다. 다른건 무시된다.
  for(count=1;count<=3;count++){
     printf("%d 번째 문자열을 입력한 후 Enter키를 누르세요.\n",count);

     fgets(string,sizeof(string),stdin);
     string[strlen(string)-1]='\0';

     total +=atoi(string);
     printf("입력 값 = %d, 총합 = %d \n",atoi(string),total);
  }
  printf("읽은 문자열의 총합은 %d 입니다. \n",total);
}
