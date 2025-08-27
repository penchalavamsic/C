#include<stdio.h>
int absolute(int);
int absolute(int x){
    if(x<0){
        x= x*-1;
    }
    return x;
}
int main(){
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);
    printf("The Absolute number is %d", absolute(a));
    return 0;
}