#include<stdio.h>
int main(){
  //  char a[][5]={"Hello", "World"}; //it can hold strings of 10 characters each
  //  for(int i=0; a[i]!='\0';i++)
    //{
   //     printf("%s\n",a[i]);//prints Hello world and garbage value
    
    //}
char b[2][3]={{'a','b','c'},
                {'d','e','f'}};
for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        printf("%c",b[i][j]);
    }
    printf("\n");   
}

}
