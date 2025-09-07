#include<stdio.h>
int main(){
    int n, i, j, target, found=0;
    int a[5];
    printf("enter 5 numbers\n");
    for(i=0; i<5; i++){
        scanf("%d", &a[i]);
    }
    printf("enter target value\n");
    scanf("%d", &target);
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(a[i]+a[j]==target){
                printf("%d %d\n", a[i], a[j]);
                found=1;
            }
           
        
        }
    }
    if(found!=1){
        printf("Not found");
    }
    
}

    
