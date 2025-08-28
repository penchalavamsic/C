#include<stdio.h>
int main(){
    int i, j;
    printf("Enter no of rows and colums\n");
    scanf("%d%d", &i, &j);
    int a[i][j], b[i][j], c[i][j];
    printf("Enter values into a\n");
    for(int x=0; x<i; x++){
        for(int y=0; y<j; y++){
            scanf("%d", &a[x][y]);
        }
    }
    printf("Enter values into b\n");
    for(int p=0; p<i; p++){
        for(int z=0; z<j; z++){
            scanf("%d", &b[p][z]);
        }
    }
    
    printf("Addition of matrices are\n");
    for(int k=0;k<i;k++){
        for(int l=0;l<j;l++){
            printf("%d", c[i][j]=a[i][j]+b[i][j]);
        }
        printf("\n");
    }

    return 0;
}