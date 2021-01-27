#include<stdio.h>
int main()
{
  int count = 0;
  int tmp = 0;
  int total = 0;

  for(count = 1;count<=3;count++){
	printf("%d 번째 정수값을 입력한 후 Enter를 입력하세요. \n",count);

	scanf("%d",&tmp);
	total += tmp;
  }
  printf("총합 : %d \n",total);
}
