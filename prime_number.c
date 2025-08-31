#include<stdio.h>
int main(){
    int a, i, c=0;
    printf("Enter a number\n");
    scanf("%d", &a);
    if(a<=1){
        printf("Not a prime number\n");
    }
    else{
        for(i=1;i<a;i++){
                if(a%i==0){
                    c++;
                }
        }
    }
    if(c>=2){
        printf("Not a prime number\n");
    }
    else{
        printf("Prime number\n");
    }
}