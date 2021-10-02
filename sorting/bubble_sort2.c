#include<stdio.h>
main()
{
	char a[10],i,n,j,temp;
	system("cls");
	printf("enter size of an array\n");
	scanf("%c",&a[i]);
	printf("enter values into an array\n");
	for(i=0;i<n-1;i++)
	{
		scanf("%c",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<(n-i-1);j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("the sorted values are\n");
	for(i=0;i<n;i++)
	{
		printf("%c",a[i]);
	}
	getchar();
	printf("\n");
	
}
