#include<stdio.h>
#include<stdlib.h>

int stack[7];
int top=0;
int max=7;

int push(int data)
{
	top=top+1;
	stack[top]=data;
}
int pop()
{
	int data;
	data=stack[top];
	top=top-1;
	return data;
}
int isfull()
{
    if(top==max)
    {
        printf("is full \n");
    }
    else
    {
        printf("not full \n");
    }
}
int isempty()
{
    if(top==-1)
    {
        printf("is empty \n");
    }
    else
    {
        printf("is not empty \n");
    }
}

int main()
{
	int i,j;
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	push(6);
	push(7);
	printf("Stack after push is \n");
	for(i=max;i>0;i--)
	{
		printf("%d \n",stack[i]);
	}
	pop();
	pop();
	printf("stack after pop is \n");
	for(j=top;j>0;j--)
	{
		printf("%d \n",stack[j]);
	}
	return 0;
}

