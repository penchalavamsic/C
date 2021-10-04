//bitwise_operators
#include<stdio.h>
#include<conio.h>
void main()
{
	int p,q;
	system("cls");
	printf("enter p and q values\n");
	scanf("%d%d",&p,&q);
	printf("ones compilment of p %d\n",~p);
	printf("ones compliment of q %d\n",~q);
	printf("bitwise and is %d\n",p&q);
	printf("bitwise or is %d\n",p|q);
	printf("bitwise xor is %d\n",p^q);
	printf("leftshift is %d\n",p<<3);
	printf("rightshift is %d\n",q>>2);
	getchar();
}
