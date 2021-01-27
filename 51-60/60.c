#include<stdio.h>
#include<string.h>
#define SKY "sky"

int My_strcmp(const char* string1,const char* string2);

int main()
{
  char string[100];
  int ret;
  
  printf("영단어를 입력한 후 Enter 키를 치세요. \n");
  printf("sky를 입력하면 프로그램이 종료됩니다. \n");

 do{
   fgets(string,sizeof(string),stdin);
   string[strlen(string)-1]='\0';
   ret = My_strcmp(string,SKY);

   if(ret  == 0){
       printf("same \n");
       break;
    }else if(ret > 1)
    	printf("%s > %s \n",string,SKY);
     else
	 printf("%s > %s \n",SKY,string);
 }while(1);

}
int My_strcmp(const char* string1, const char* string2){
   if(*string1 == '\0' && *string2 == '\0')
       return 0;
   
   while(*string1 != '\0'){
      if(*string2 == '\0')
	  return 1;
      if(*string1 == *string2){ 
	  string1++;
	  string2++;
	  continue;
      }

      if(*string1<*string2) return -1;
      else return 1;
   }
   if(*string2 != '\0')
       return -1;
   return 0;
}
