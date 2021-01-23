#include<stdio.h>
int main()
{
    float d;
    double d1;
    double d2;

    d = 3.141592;
    d1 = 1234567890;
    d2 ='c';

   /*
	double과 float의 차이는 소숫점 아래 정확도차이
	

	float  => 소숫점 아래 7자리
	double => 소숫점 아래 14자리 
   */

    printf("실수형 변수 d의 값은 %E \n",d);
    printf("실수형 변수 d1의 값은 %E \n",d1);
    printf("실수형 변수 d2의 값은 %E \n",d2);
}
