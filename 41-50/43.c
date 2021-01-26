#include<stdio.h>
struct tagScore{
    int kor;
    int eng;
    int math;
};
int main()
{
 struct tagScore sc;

  sc.kor=100;
  sc.eng=100;
  sc.math=100;

  printf("%d %d %d \n",sc.kor,sc.eng,sc.math);
}
