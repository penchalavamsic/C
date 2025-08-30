#include<stdio.h>
int sum_of_digits(int);
int sum_of_digits(int n)
{
    int temp=0;
    int sum=0;
   
   while(n>0)
   {
    int a=n%10;
    temp=temp+a;
    n=n/10;
   }
    return temp;
}
int main(){
    int b;
    printf("Enter a number\n");
    scanf("%d", &b);
    printf("%d", sum_of_digits(b));
    return 0;
}