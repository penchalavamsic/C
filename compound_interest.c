//CI= Amount- Principal, Amount=p(1+r/100)t
#include<stdio.h>
#include<math.h>
int main(){
    double principal=1000, compound, rate=10, time=2, amount;
    amount=principal*(pow((1+rate/100),time));
    compound=amount-principal;
    printf("%0.2lf", compound);
    return 0;
}