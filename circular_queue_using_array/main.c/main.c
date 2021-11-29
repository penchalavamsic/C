/*circular queue using array*/
#include<stdio.h>
#define size 10
int queue[size];
int front=-1;
int rear=-1;
void enqueue(int value)/*insertion*/

{
	if((front=-1)&&(rear=-1))/*queue is empty*/
	{
		front=0;
		rear=0;
		queue[rear]=value;
		
	}
	else if(front==rear+1) {
		printf("queue is full\n");
		
	
	}
	else{
		rear=(rear+1)%value;
		queue[rear]=value;
	}
}
/*deletion*/
void dequeue()
{
	if((front=-1)&&(rear=-1))
	{
		printf("queue is empty\n");
	}
	else if (front=rear)
	{
	 printf("\nThe dequeued element is %d", queue[front]);  
   front=-1;  
   rear=-1;  	
	}
	else  
{  
    printf("\nThe dequeued element is %d", queue[front]);  
   front=(front+1)%size;  
}  
}
void display()  
{  
    int i=front;  
    if(front==-1 && rear==-1)  
    {  
        printf("\n Queue is empty..");  
    }  
    else  
    {  
        printf("\nElements in a Queue are :");  
        while(i<=rear)  
        {  
            printf("%d,", queue[i]);  
            i=(i+1)%size;  
        }  
    }  
}  
main()
{
	int choice=1,x;
	system("cls");
	while(choice<4&&choice!=0)
	{
		 printf("\n Press 1: Insert an element");  
    printf("\nPress 2: Delete an element");  
    printf("\nPress 3: Display the element");  
    printf("\nEnter your choice");  
    scanf("%d",&choice);
    switch(choice)
    {
    	case 1:
    		printf("enter element to insert\n");
    		scanf("%d",&x);
    		enqueue(x);
    		break;
    		 case 2:  
        dequeue();  
        break;  
        case 3:  
        display();  
	}
	}
	getch();
}
