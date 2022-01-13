#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int queue[4];
int front = -1, rear = -1, n=4;
void enqueue(int element)
{
    if ((front == 0 && rear == n-1) || (front == rear+1))
	 {
      printf("Queue is full\n");
      return;
   }
   if (front == -1) 
   {
      front = 0;
      rear = 0;
   }
   else {
      if (rear == n - 1)
         rear = 0;
      else
         rear = rear + 1;
   }
   queue[rear] = element ;
}
void dequeue(){
    if (front == -1) {
       printf("Queue is empty\n");
      return ;
   }
    printf(" deleted element  is : %d ", queue[front]);
   if (front == rear) {
      front = -1;
      rear = -1;
   }
   else {
      if (front == n - 1)
         front = 0;
      else
         front = front + 1;
   }
}
 
void display(){
   int f = front, r = rear;
   if (front == -1) {
       printf("Queue is empty");
      return;
   }
   printf("Queue elements are :\n");
   if (f <= r) {
      while (f <= r){
          printf("%d\n", queue[f]);
         f++;
      }
   }
   else {
      while (f <= n - 1) {
          printf("%d\n",queue[f]);
         f++;
      }
      f = 0;
      while (f <= r) {
          printf("%d\n",queue[f]);
         f++;
      }
   }
   
}  
   

void main(){
    int value;
    while(1)
	{
		int choice;
    printf("\n 1.Insert value to queue");
    printf("\n 2. Delete value from queue");
    printf("\n 3. Display value from queue");
    printf("\n 4. exit");
    printf("\n enter your choice: \t");
    scanf("%d",&choice);
    
        switch(choice)
		{
            case 1:printf("enter to insert: ");
            scanf("%d",&value);
                enqueue(value);
                break;
            case 2:dequeue();
                break;
            case 3:display();
                break;
            case 4:exit(0);
            default : printf("Wrong choice");
        }
    }
    getch();
}
