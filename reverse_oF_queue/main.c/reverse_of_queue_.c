/*reverse of a queue*/
#include<stdio.h>

int f = -1,r = -1;
int q[50];
void enqueue(int value,int l)
{
	if(r==l-1){
		printf("Queue is full");
	}
	else if((f==-1)&&(r==-1)){
		f = r = 0;
		q[r] = value;
	}
	else
	{
		r++;
		q[r] = value;	
	}
}
void print()
{
	int i;
	for(i=f;
		i<=r;
		i++)
		
	                                     
	{
		printf("\n%d",q[i]);
	}

}
void reverse()/*reverse function for reversing the data*/
{
	int i,j,t;
	for(i=f,j=r;i<j;i++,j--){
		t = q[i];
		q[i] = q[j];
		q[j] = t;
	}
}
main( )
{
	int n,i=0,a;
	printf("Enter the size of Queue");
	scanf("%d",&n);
	printf("\nEnter the data for Queue");
	while(i<n){
		scanf("%d",&a);
		enqueue(a,n);
		i++;
	}
	printf("\nQueue that entered");
	print();
	reverse();
	printf("\nQueue after reversing");
	print();
	
}
