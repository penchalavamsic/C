/*small&big_no_in_an_array*/
#include<stdio.h>
main()
{
	int n,i,small,big,a[20];
	system("cls");
	printf("enter size of an array\n");
	scanf("%d",&n);
	printf("enter values into an array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	big=a[0];
	small=a[0];
	for(i=0;i<n;i++)
	{
		if(big<a[i])
		big=a[i];
		if(small>a[i])
		small=a[i];
	}
	printf("biggest number is %d\n",big);
	printf("smallest number is %d",small);
	getchar();
	
}
