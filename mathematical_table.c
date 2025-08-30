#include<stdio.h>
int table(int);
int table(int a){
    int i;
    for(i=1;i<=10;i++){
        printf("%d * %d=%d\n", a,i,a*i);
    }
}
int main(){
    int value;
    printf("Enter a number\n");
    scanf("%d", &value);
    table(value);
    return 0;
}