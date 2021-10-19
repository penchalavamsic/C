/*queue_operations_using_arrays*/
#include<stdio.h>
#include<conio.h>
#define SIZE 10
void enqueue(int);
void dequeue();
void display();
void exit();
int queue[SIZE],front=-1,rear=-1;
void main()
{
	int value,choice;
	system("cls");
	while(1)
	{
		printf("**MENU**\n");
		pritnf("1.insertion\n2.deletion\n3.display\n4.exit\n");
		printf("enter your choice\n");
		scanf("%d",&choice);
		switch(choice){
		
		case 1:printf("enter value to insert\n");
		   scanf("%d",&value);
		   enqueue(value);
		   break;
		   case 2:dequeue();
		    break;
		    case 3:display();
		    break;
		    case 4:exit(0);
		    default:printf("\n wrong selection\n");
		}
	
	}
}
void enqueue(int value)
 {
 	if (rear==SIZE-1)
 	printf("\nQueue is full!!Insertion not possible\n");
 	else
 	{
 		if (front==-1)
 		 front=0;
 		 rear++;
 		 queue[rear]=value;
 		 printf("\ninserton success\n");
 		 
	 }
 }
 void dequeue()
 {
 	if(front==rear)
 	printf("\nqueue is empty,deletion is not possible\n");
 	else
 	{
 		printf("\ndeleted:%d",queue[front]);
 		front++;
 		if(front==rear)
 		front=rear=-1;
 		
	 }
 }
 void display()
 {
 	if(rear==-1)
 	printf("\nQueue is empty\n");
 	else
 	{
 		int i;
 		printf("\nQueue elements are:\n");
 		for(i=front;i<=rear;i++)
 		printf("%d",queue[i]);
 		
	 }
 }
