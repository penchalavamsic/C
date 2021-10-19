/*dynamic_memory_allocation_calloc()*/
/*sum&average_of_array*/
#include<stdio.h>
#include<stdlib.h>
main()
{
	int a,*p,n,i,sum=0;
	float avg;
	system("cls");
	printf("enter size of an array\n");
	scanf("%d",n);
	p=(int*)calloc(n,size(int);
	printf("enter values into an array through pointer\n");
	for(i-0;i<n;i++)
	{
		scanf("%d",(p+i));
		sum=sum+*(p+i);
	}
	avg=(float)sum/n;
	printf("sum of n values pf an array is %d\n",sum);
	printf("average of n values of an array is %f\n",avg);
	free(p);
	getchar();
	
}
