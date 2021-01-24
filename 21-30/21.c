#include<stdio.h>
int main()
{
    int x=1;
    int y=2;
    int z;
    int zz;

    z = x+y;
    /*
	printf의 리턴 값 ==> 출력한 Byte
    */
    zz = printf("z의 값:%d \n",z);
    printf("zz의 값:%d \n",zz);


}
