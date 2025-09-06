#include<stdio.h>
int main(){
    int n, i, small1, small2;
    printf("Enter size of array\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements of array\n");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    if(a[0]<a[1]){
        small1=a[0];
        small2=a[1];
    }
    else{
        small1=a[1];
        small2=a[0];
    }
    for(i=2;i<n;i++){
        if(a[i]<small1){
            small2=small1;
            small1=a[i];}
        
        else{
            if(a[i]<small2){
                small2=a[i];
            }
        }
    }
    printf("%d\n", small1);
    printf("%d", small2);
    return 0;
}