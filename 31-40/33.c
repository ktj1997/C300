#include<stdio.h>
int main()
{
  int i=0,j=0;

  for(i=1;i<=9;i++){
      if(i == 3 || i == 5)
	  continue;
      for(j=1;j<=9;j++){
         printf("%d * %d = %2d \n",i,j,i*j);
      }
  }

}
