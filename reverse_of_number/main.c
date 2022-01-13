/*reverse_of_number*/
#include<stdio.h>
main()

{
	int n;
	
	int a[20],r,rev=0,i,j;
	system("cls");
	printf("enter size of array \n");
	scanf("%d",&n);
	printf("enter values into an array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[n]);
	
	while(a[n]>0)
	{
		r=a[n]%10;
		rev=rev*10+r;
		a[n]=a[n]/10;
	}
	printf("reverse of a given number \n");
	for(i=n;i<=n;i++)
	{
		printf("%d",&a[n]);
		
	}
	getchar();
}
