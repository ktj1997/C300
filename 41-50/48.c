#include<stdio.h>
void print_x(int x);
void print_gx();
int x = 200;
int main()
{
  int x = 5;
  print_x(5); //파라미터로 넘긴것
  print_gx(); //전역변수
}
void print_x(int x){
  //지역변수는 함수내에서 전역변수보다 우선순위가 높다 
  printf("x = %d \n",x);
}
void print_gx()
{
  printf("x = %d \n",x);
}
