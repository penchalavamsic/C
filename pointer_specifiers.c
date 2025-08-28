#include<stdio.h>
int main(){
    int *p, a=10;
    p=&a;
    printf("%d\n", p); //garbage value
    printf("%p\n",p); //address of p
    printf("%d\n", *p); //value of p
    printf("%p", *p); //random value
}