#include<stdio.h>
#include<conio.h>
#define SIZE 10
void enqueue(int);
void dequeue();
void display();
int queue[SIZE],front=-1,rear=-1;
void main()
{
	int value,choice;
	system("cls");
	while(1)
	{
		printf("\nMENU\n");
		printf("1.insertion\n2.deletion\n3.display4.exit\n");
		printf("enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("enter value to insert\n");
			      scanf("%d",&value);
			      enqueue(value);
			      break;
			case 2 :dequeue();
			         break;
			case 3 :display();
			        break;
			
			       default:("wrong selection\n");
				   				       
		}
		
		
	}
	getch();
	
	
}
void enqueue(int value)
{


	if(rear==SIZE-1)
	
		printf("insertion not possible\n");
		else
		{
			if (front=-1)
			{
				front=0;
				rear++;
				queue[rear]=value;
				printf("insertion success\n");
			}
		}
	}
	
	void dequeue()
	{
		if(front=rear)
		{
			printf("queue is empty\n");
		}
		else{
			printf("deleted:%d",queue[front]);
			front++;
			if(front==rear)
			front=rear=-1;
			
		}
	}
	void display()
	{
		if(rear==-1)
		printf("queue is empty/n");
		else
		{
			int i;
			printf("queue elements are\n");
			for(i=front;i<=rear;i++)
			{
				printf("%d\t",queue[i]);
			}
		}
	}
	




