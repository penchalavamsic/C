/*fibonacci_series*/
#include<stdio.h>
main()
{
	int f1=0,f2=1,f3,n;
	system("cls");
	printf("enter n value\n");
	scanf("%d",&n);
	printf("%5d %5d",f1,f2);
	while(f2<n)
	{
		f3=f1+f2;
		printf("%5d",f3);
		f1=f2;
		f2=f3;
	}
	getchar();
}
