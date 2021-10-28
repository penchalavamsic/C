/*multiplication_table*/
#include<stdio.h>
main()
{
	int n,i;
	system("cls");
	printf("enter n value\n");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("%d*%d=%d\n",n,i,n*i);
	}
	getchar();
}
