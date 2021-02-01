#include<stdio.h>
#include<string.h>
void toLowerCase(char string[]);
int main()
{
  char string[100];
  do{
     fgets(string,sizeof(string),stdin);
     string[strlen(string)-1]='\0';

     if(strlen(string) == 0)
	 break;

     toLowerCase(string);
     puts(string);
   
  }while(1);
}
void toLowerCase(char string[]){
    for(int i=0;i<strlen(string);i++){
        if(65<=string[i] && string[i]<=90)
	    string[i]+=32;
    }
}
