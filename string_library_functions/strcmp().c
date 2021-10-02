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
	if(strcmp(str1,str2)==0)
	{
			printf("equal");
	}

	else if(strcmp(str1,str2)>0)
	{
			printf("negative");
	}

	
	


	else if(strcmp(str1,str2)<0)
	{
			printf("negative");
	}

	getchar();
}
