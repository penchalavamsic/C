//string_upper
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char sname[20];
	system("cls");
	printf("enter a string\n");
	gets(sname);
	strupr(sname);
	puts(sname);
	getchar();
	
}
