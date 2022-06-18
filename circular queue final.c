/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
#define max 5
int queue[5];
int front=-1;
int rear=-1;
//int max=5;

int enqueue(int data)
{
  if(front==-1 && rear==-1)
  {
      front=rear=0;
      queue[rear]=data;
  }
  else if(((rear+1)%max)==front)
  {
      printf("queue is full \n");
  }
  else 
  {
      rear=(rear+1)%max;
      queue[rear]=data;
  }
    return data; 
}

int dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("error\n");
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        front=(front+1)%max;
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
// printf("%d ",queue[0]);
   for(i=0;i<5;i++)
   {
       printf("%d \n",queue[i]);
   }
   dequeue();
   printf("\n");
   for(i=front;i<rear;i++)
   {
       printf("%d \n",queue[i]);
   }
   
    return 0;
}
