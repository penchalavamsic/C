#include<stdio.h>
main()
{
	int a[11];
	int i, sum=0;
	int length = sizeof(a)/sizeof(a[0]);
	printf("enter values\n");
	for(i=0;i<11;i++)
	scanf("%d",&a[i]);
	printf("\n");
	for(i=length-1;i>=5;i--)
	{
		
		printf("%d\n",a[i]);
		printf("\n\n");
	}
	for(i=length-1;i<length;i--)
	{
		sum=sum+a[i];
		
		
	}
	
	printf("sum=\n",sum);
	
	getch();
	
}
