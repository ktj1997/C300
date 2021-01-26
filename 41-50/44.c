#include<stdio.h>
/*
  공용체는 메모리를 공유하고있기 때문에,
  변수들에 값을 모두 할당할 경우, 영향을미친다.
*/
union tagVariant{
    int i;
    float d;
};
int main()
{ 
   union tagVariant v;

   v.i=0;
   v.d=5.5;

   printf("%d \n",v.i);
   printf("%f \n",v.d);
}
