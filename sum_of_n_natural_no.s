/*sum_of_first_n_natural_numbers*/
#include<stdio.h>
main()
{
	int n,i,sum=0;
	system("cls");
	print("enter n value\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	 sum=sum+i;
	}
	printf("sum of first n natural numbers is %d",n);
	getchar();
}
