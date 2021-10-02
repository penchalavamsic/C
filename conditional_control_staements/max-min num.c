#include<stdio.h>
main()
{
	int a,b,num1,num2;
	scanf("%d%d",&a,&b);
	num1=value1(a,b);
	num2=value2(a,b);
	printf("big no is %d\n",value1(a,b));
	printf("smallest no is %d\n",value2(a,b));
}
int value1(int x,int y)
{
	int result1;
	result1=(((x>y)&&(y<x))?x:y);
	return result1;
}
int value2(int x, int y)
{
	int result2;
	result2=(((x>y)&&(y<x))?y:x);
	return result2;
 } 
