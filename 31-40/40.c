#include<stdio.h>
int main( )
{
    int i=0,j=1;
    //메모리 출력을 위해서 주로 %p를 사용
    printf("값 = %d, 메모리주소 = %p \n",i,&i);
    printf("값 = %d, 메모리주소 = %p \n",j,&j);

}
