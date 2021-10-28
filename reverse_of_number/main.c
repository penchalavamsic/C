/*reverse_of_number*/
#include<stdio.h>
main()

{
	int n,r,rev=0;
	system("cls");
	printf("enter n value\n");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	printf("reverse of a given number is %d\n",rev);
	getchar();
}
