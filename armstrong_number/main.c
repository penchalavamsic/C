/*armstrong_number*/
#include<stdio.h>
main()
{
	int r,n,sum=0,p;
	system("cls");
	printf("enter n value\n");
	scanf("%d",&n);
	p=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+r*r*r;
		n=n/10;
	}
	if(p==sum)
	
		printf("%d is armstrong\n",p);
		else
		printf("%d is not a armstrong",p);
		getchar();
		
}
