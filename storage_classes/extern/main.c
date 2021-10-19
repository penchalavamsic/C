/*extern_storage_class*/
#include<stdio.h>
extern int p=40;
main()
{
	void show();
	printf("%d\n",p);
	show();
	getch();
	
	
}
void show()
{
	printf("%d",p);
}

