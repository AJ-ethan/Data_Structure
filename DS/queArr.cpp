#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int que_arr[MAX];
int font =-1,rear=-1;

void insert(int item);
int del();
int peek();
void display();
int isfull();
int isEmpty(); 

int main()
{
	insert(5);
	insert(10);
	insert(3);
	display();
	int d = del();
	printf("deleted elamant is %d\n",d);
	display();
	printf("%d font value of Q \n",peek());
	
}

int isfull()
{
	if(rear==MAX-1)
		return 1;
	else 
		return 0;
		
}

int isEmpty()
{
	if(font==-1 || font ==rear+1)
		return 1;
	else; 
		return 0;
		
}
void insert(int item)
{
	if(isfull())
	{
		printf("que is Overflow");
		return;
	}
	if(font == -1)
		font = font +1;
	rear = rear+1;
	que_arr[rear] = item;
}
void display()
{
	int i;
	if(isEmpty())
	{
		printf("que is Underflow");
		return;
	}
	for(i = font;i<=rear;i++)
		printf("%d    ",que_arr[i]);
	printf("\n");
	
}
int del()
{	
	if(isEmpty())
	{
		printf("que is undeflow");
		exit(1);
	}
	font = font+1;
	return que_arr[font-1];
}
int peek()
{
	if(isEmpty())
	{
		printf("que is underflow");
		exit(1);
	}
	return que_arr[font];
}
