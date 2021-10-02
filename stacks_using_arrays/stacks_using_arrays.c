#include<stdio.h>
#include<conio.h>
#define SIZE 10
//implementation of stack operations using arrays
void push(int);
void pop();
void display();
int stack[SIZE],top=-1;
main()
{
	int value,choice;
	system("cls");
	while(1)
	{
		printf("\n**MENU**\n");
		printf("1.push\n2.pop\n3.display\n4.exit");
		printf("\n Enter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("enter value to insert\n");
			      scanf("%d",&value);
			      push(value);
			      break;
			case 2:pop();
			break;
			case 3:display();
			break;
			case 4:exit(0);
			default:printf("\n wrong selection");
			  
		}
	}
	getch();
}
void push(int value)
{
	if(top==SIZE-1)
	printf("\nStack is full!!Insertion is not possible!!\n");
	else
	{
		top++;
		stack[top]=value;
		printf("\n Insertion Success\n");
		
	}
}
void pop()
{
	if (top==-1)
	printf("\n stack is empty!!Deletion is not possible\n");
	else
	{
		printf("\nDeleted:%d",stack[top]);
		top--;
	}
}
void display()
{
	if (top==-1)
	printf("\nStack is empty\n");
	else
	{
		int i;
		printf("\n Stack elements are:\n");
		for(i=top;i>=0;i--)
		printf("%d\n",stack[i]);
	}
}
