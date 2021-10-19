/*factorial_of_n_using_recursion*/
int factorial(n)
{
	if(n==0)
	return(1);
	else
	return(n*factorial(n-1));
}
#include<stdio.h>
main()
{
	int n,r;
	system("cls");
	printf("enter n value\n");
	scanf("%d",&n);
	r=factorial(n);
	printf("factorial of given number is %d\n",r);
	getchar();
}
