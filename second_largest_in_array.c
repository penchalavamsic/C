#include<stdio.h>
int main(){
    int n, large1, large2, i;
    printf("Enter size of array\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements of array\n");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    if(a[0]>a[1]){
        large1=a[0];
        large2=a[1];
    }
    else {
        large1=a[1];
        large2=a[0];
    }
    for(i=2;i<n;i++){
        if(a[i]>large1){
            large2=large1;
            large1=a[i];
        }
        else if(a[i]>large2){
            large2=a[i];
        }
    }
    printf("First largest is %d\n", large1);
    printf("Second largest is%d", large2);
    return 0;
}