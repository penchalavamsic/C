//multiplication_table
#include<stdio.h>
#include<conio.h>
main()
{
	int n,i;
	system("cls");
	printf("enter the value of n\n");
	scanf("%d",&n);
	for(i=1;i<=20;i++)
	{
		printf("%d=%d*%d\n",n*i,n,i);
	}
	getchar();
	
}
