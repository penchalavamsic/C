#include<stdio.h>
int sum(int , int);
int sum(int a, int b){
    return a+b;
}
int main(){
    int x, y;
    printf("Enter two numbers\n");
    scanf("%d %d", &x, &y);
    printf("%d",sum(x, y));
    return 0;
}