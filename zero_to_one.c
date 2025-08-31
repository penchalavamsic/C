#include<stdio.h>
int main(){
    int n, rev=0, digit, result=0;
    printf("Enter a value\n");
    scanf("%d", &n);
    while(n>0){
        digit=n%10;
        if(digit==0)
            digit=1;
        
        rev=rev*10+digit;
        n=n/10;
    } 
    while(rev>0){
        digit=rev%10;
        result=result*10+digit;
        rev=rev/10;
    }
    printf("%d",result);
}