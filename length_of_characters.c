#include<stdio.h>
int main(){
    char ch[]="ab";
    int j=0;
    for(int i=0;ch[i]!='\0';i++){
        j++;
    }
    printf("%d",j);
}