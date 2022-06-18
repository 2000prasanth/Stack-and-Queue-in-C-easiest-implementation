#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int queue[MAX];
int front=0;
int rear=-1;



int isfull()
{
	if(rear==MAX-1)
	return 1;
	else
	return 0;
}
int isempty()
{
	if(front==rear)
	return 1;
	else
	return 0;
}
int enqueue(int data)
{
	if(!isfull())
	{
		rear=rear+1;
		queue[rear]=data;
		//rear++;
		
	}
}
int dequeue()
{
if(!isempty())
	{
queue[front]=0;
		front=front+1;
	
		}	
}
int main()
{
int i;
enqueue(1);
enqueue(2);
enqueue(3);
enqueue(4);
enqueue(5);
enqueue(6);
enqueue(7);
enqueue(8);
for(i=front;i<=rear;i++)
{
	printf(" %d  ",queue[i]);
}
printf("\n");
dequeue();
dequeue();
for(i=front;i<=rear;i++)
{
	printf(" %d  ",queue[i]);
}
return 0;
}
