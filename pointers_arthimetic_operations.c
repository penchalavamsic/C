#include<stdio.h>
int main(){
    int *p;
    printf("%p\n",p);
    printf("%p\n", p++);
    printf("%p\n", p--);
    printf("%p\n", ++p);
    return 0;
}