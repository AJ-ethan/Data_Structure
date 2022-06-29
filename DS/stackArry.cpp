#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int stack_arr[MAX];
int top =-1;
int isfull()
{
	if(top==MAX-1)
		return 1;
	else
		return 0;
}
int isEmpty()
{

	if(top==-1)
		return 1;
	else
		return 0;
}


void push(int item)
{
	if (isfull())
	{
		printf("Stack Overflow\n");
		return;
	}
	top = top+1;
	stack_arr[top] = item;
	} 
int pop()
{
	int item;
	if(isEmpty())
	{
		printf("stack underflow\n");
		exit(1);
	}
	item = stack_arr[top];
	top = top-1;
	return item;
	}
	
int peek()
{
	if (isEmpty())
	{
		printf("stack unnderflow");
		exit(1);
	}
	return stack_arr[top];
		
}
void display()
{
	int i;
	if (isEmpty())
	{
		printf("stack underflow");
		return;
	}
	printf("stack elements :\n\n ");
	for(i=top;i>=0;i--)
		printf(" %d\n",stack_arr[i]);
	printf("\n");
}


int main()
{
	int choice,item;
	printf("loop is running");
	while(1)
	{
		printf(" 1.Push\n");
		printf("2.Pop\n");
		printf("3.display the top elemants\n");
		printf("4.Display all stack of elmants:\n");
		printf("5.Quit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("enter the elemant of your choice: ");
				scanf("%d",&item);
				push(item);
				break;
			case 2:
						
				item = pop();
				printf("popped item is %d\n",item);
				break;
			case 3:
				printf("item at top is %d\n",peek());
				break;
			case 4:
				display();
				break;
			case 5:
		 		exit(1);
		 	default:
		 		printf("Wrong choice");
		 }
	}
}		


