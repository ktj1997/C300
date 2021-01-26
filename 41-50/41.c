#include<stdio.h>
int main()
{
 /*
   포인터는 메모리에 직접 접근
   char* string = "korea" //char 포인터형에는 &연산자 X
   배열이름은 포인터이다.
 */

 int people_A=0,people_B=0;
 int* pointer;
 int* people;

 pointer = &people_A;
 *pointer=1;

//1
 printf("%d %d \n",people_A,*pointer);

 people = &people_A;
 *people = 2;

//2
 printf("%d %d %d \n",people_A,*pointer,*people);

 pointer = &people_B;
 *pointer = 3;

 // 2 3 3
 printf("%d %d %d \n",people_A,people_B,*pointer);
}
