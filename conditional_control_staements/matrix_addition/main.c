//matrix_addition
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10],b[10][10],c[10][10],i,j,m,n;
	system("cls");
	printf("enter row and column size of a matrix\n");
	scanf("%d%d",&m,&n);
	printf("enter values into an array a\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the values into an array b\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	/*addition of two matrices*/
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
		
	}

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("the addition of two matrices is = %3d\n",c[i][j]);	
		}
		printf("\n");
		getchar();
	}
	
	
}
