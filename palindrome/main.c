/*palindrome*/
#include<stdio.h>
main()
{
	int n,r,rev=0,p;
	system("cls");
	printf("enter n value\n");
	scanf("%d",&n);
	p=n;
	while(n>0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n%10;
		
	}
	if( p==rev)
	printf("%d is a palindrome\n",p);
	else
	printf("%d is not a palindrome\n",p);
	getchar();
}
