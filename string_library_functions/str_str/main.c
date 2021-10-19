/*string strstr() */
#include<stdio.h>  
#include <string.h>    
int main(){    
  char str[100]="hello world";    
  char *sub; 
  system("cls");   
  sub=strstr(str,"hello");    
  printf("\nSubstring is: %s",sub);    
 return 0;    
}   
