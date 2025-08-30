#include<stdio.h>
int main(){
    char ch[]={'a','b','c'}; //prints abc(garbage) because there is no '\0'
    char ch[]={'a','b','c','\0'}; //prints abc only because there is '\0'
    char ch1[]={"abc"};
    printf("%c\n",ch); //%c works a pointer to array
    printf("%s",ch1);
}