#include<stdio.h>
int main()
{
  int i =1;
  int j =2;
  int k =7;

  if(i == 1){
      if(j ==2){
	if(k == 3)
	    printf("i = 1 && j =2 && k = 3 입니다 \n");
	else if(k == 4)
	    printf("i = 1 && j =2 && k = 4 입니다 \n");
      	else if( k == 5)
	    printf("i = 1 && j =2 && k = 5 입니다 \n");
   	else
	    printf("i = 1 && j =2 && k = %d 입니다 \n",k);
   }
  }

}
