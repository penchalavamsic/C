#include<stdio.h>
double power(int, int);
double power(int a , int b){
    double i=1;
    for(int c=1;c<=b;c++){
        i=i*a;
    }
    return i;
}
int main(){
    int x, y;
    printf("Enter base and exponent value\n");
    scanf("%d %d", &x, &y);
    printf("%0.lf", power(x, y));
    return 0;
}