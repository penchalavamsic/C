#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, *p, i;
    printf("Enter no.of values\n");
    scanf("%d", &n);
    p=(int*)malloc(n*sizeof(int));
    if(p==NULL){
        printf("No values in array\n");
    }
    else{
        for(i=0;i<n;i++){
            scanf("%d", &*(p+i));
        }
    }
    for(i=0;i<n;i++){
        printf("%d\n", *(p+i));
    
    }
    free(p);
    return 0;
}