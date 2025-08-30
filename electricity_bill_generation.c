#include<stdio.h>
int main(){
    int watts, choice;
    float bill;
    printf("Enter no of watts\n");
    scanf("%d", & watts);
    printf("Choose the division\n");
    printf("1.Domestic\n2.Commercial\n");
    scanf("%d", &choice);
    switch(choice){
        case 1: if(watts<=100)
                printf("%f", watts*0.2);
                else
                printf("%f", watts*0.4);
                break;
        case 2: if(watts>100)
                printf("%f", watts*0.5);
                else
                printf("%f", watts*0.6);
        default:
        printf("Invalid Choice");

    }
return 0;
}