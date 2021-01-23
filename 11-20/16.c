#include<stdio.h>
#define HUNDRED 100
const char j=10;

int main()
{
  /*
  HUNDRED =200;
  j = 200;
  
  둘다 에러발생
  둘다 값을 변경할 수는 없다.
  두 방법의 자료형을 명시했다는 것 외에 차이점이 없다.
  */

  printf("문자형 상수 HUNDRED의 값은 %d\n",HUNDRED);
  printf("문자형 상수 j의 값은 %d\n",j);
}
