#include<stdio.h>
void change_x1(int x1);
void change_x2(int* x2);
int main()
{
   int x = 5;
   printf("함수를 호출하기 전: %d \n",x);

   change_x1(x);
   printf("change_x1 함수를 호출한 이후의 x값: %d \n",x);
   
   change_x2(&x);
   printf("chage_x2 함수를 호출한 이후의 x값 : %d \n",x);


}
void change_x1(int x1){
   x1 = 50;
}
void change_x2(int* x2){
   *x2 = 100;
}
