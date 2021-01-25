#include<stdio.h>
int main()
{
  int i=1,hap=0;
  //do~while ==> 일단 한번은 실행한다
  do{
    hap+=i;
    i++;
  }while(i<=10);
  printf("hap = %d \n",hap);
}
