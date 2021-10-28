/*sum&avg_of_values_in_array*/
#include<stdio.h>
main()
{
	int n,a[20],i,sum=0;
	system("cls");
	float avg;
	printf("enter size of an array\n");
	scanf("%d",&n);
	printf("enter values into an array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	avg=sum%n;
	printf("sum of values is %d\n",sum);
	printf("avg of values is %f",avg);
	getchar();
}
