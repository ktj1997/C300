#include<stdio.h>
int main()
{
  int i = 5;

  switch(i){
	case 1:
		printf("i = 1 \n");
		break;
	case 2:
		printf("i = 2 \n");
		break;
	case 3: 
		printf("i = 3 \n");
		break;
	default :
		printf("i = %d \n",i);
		break;
  }
  //default는 if~else문과 마찬가지로 생략 가능
}
