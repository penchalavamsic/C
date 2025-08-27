#include<stdio.h>
int max(int, int);
int max(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int x, y;
    printf("enter two values\n");
    scanf("%d %d", &x, &y);
    printf("%d", max(x, y));
    return 0;
}
