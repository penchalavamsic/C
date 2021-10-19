/*static-static_storage class*/
#include<stdio.h>
main()
{
	void display();
	display();
	display();display();display();
	getch();
}
void display()
{
	static int i;
	printf("%d",i);
	i++;
}
