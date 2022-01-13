/*bubble_sort*/
#include<stdio.h>
main()
{
	int i,j,n,a[10],temp;
	system("cls");
	printf("enter size of an array\n");
	scanf("%d",&n);
	printf("enter values into a array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<(n-1-i);j++)
		{
			if(a[j]<a[j+1])
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
		printf("%d\n",a[i]);
	
	}
		
	getchar();
		printf("\n");
}
