#include<stdio.h>
int main()
{
   /*
        배열은 문자열로 초기화 할 때,
	끝을 알리기위해서 자동으로 NULL문자 삽입
   */
   char one[10]="Koxea";

   puts(one);
   one[2]='r';
   puts(one);

   printf("one[0]=%3d,%c\n",one[0],one[0]);
   printf("one[0]=%3d,%c\n",one[1],one[1]);
   printf("one[0]=%3d,%c\n",one[2],one[2]);
   printf("one[0]=%3d,%c\n",one[3],one[3]);
   printf("one[0]=%3d,%c\n",one[4],one[4]);
   printf("one[0]=%3d,%c\n",one[5],one[5]);
}
