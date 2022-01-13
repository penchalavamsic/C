#include <stdio.h>  
  
# define max 4



int queue[max];  
int front=-1;  
int rear=-1;  

void enqueue(int element)  
{  
    if(front==-1 && rear==-1)   /*condition for queue is empty  */
    {  
        front=0;  
        rear=0;  
        queue[rear]=element;  
    }  
    else if((rear+1)%max==front) 
    {  
        printf("Queue is overflow..\n");  
    }  
    else  
    {  
        rear=(rear+1)%max;       
        queue[rear]=element;     
    }  
}  
  
 
int dequeue()  
{  
    if((front==-1) && (rear==-1))  
    {  
        printf("\nQueue is empty..\n");  
    }  
 else if(front==rear)  
{  
   printf("\nThe dequeued element is %d\n", queue[front]);  
   front=-1;  
   rear=-1;  
}   
else  
{  
    printf("\nThe dequeued element is %d\n", queue[front]);  
   front=(front+1)%max;  
}  
}  
void display()  
{  
    int i=front;  
    if(front==-1 && rear==-1)  
    {  
        printf("\n Queue is empty..\n");  
    }  
    else  
    {  
        printf("\nElements in a Queue are :\n");  
        while(i<=rear)  
        {  
            printf("%d,", queue[i]);  
            
            i=(i+1)%max;
			  
        }  
        
    }  
    
}  
int main()  
{  
    int choice=1,x;  
      
    while(choice<4 && choice!=0) 
    {  
    printf("\n Press 1: Insert an element");  
    printf("\nPress 2: Delete an element");  
    printf("\nPress 3: Display the element");  
    printf("\nEnter your choice");  
    scanf("%d", &choice);  
      
    switch(choice)  
    {  
          
        case 1:  
      
        printf("Enter element to insert\n");  
        scanf("%d", &x);  
        enqueue(x);  
        break;  
        case 2:  
        dequeue();  
        break;  
        case 3:  
        display();
		break;  
  
    }}  
    return 0;  
}  
