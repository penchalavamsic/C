#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,sum=0;
	system("cls");
	printf("enter the n value\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("the sum of n numbers is %d\n",sum);
	getchar();
}
