#include<stdio.h>
int getSum(int val);
int main()
{
   printf("%d \n",getSum(10));
}
int getSum(int val){
  int i=0,sum=0;

  for(i=1;i<=val;i++)
      sum += i;
  return sum;
}
