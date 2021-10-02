#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str1[10],str2[10];
	system("cls");
	printf("enter a string\n");
	gets(str1);
	gets(str2);
	strcat(str2,str1);
	puts(str2);
	getchar();
}
