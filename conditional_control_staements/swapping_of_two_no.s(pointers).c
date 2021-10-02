#include<stdio.h>
#include<conio.h>
void main()
{
	int m,n,temp,*p,*q;
	system("cls");
	printf("enter the values\n");
	scanf("%d%d",&m,&n);
	p=&m;
	q=&n;
	printf("%d\n%d\n",m,n);
	temp=*p;
	*p=*q;
	*q=temp;
	printf("%d\n%d\n",*p,*q);
	getchar();
}
