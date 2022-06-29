#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int info;
	struct node *link;
	
}*top =NULL;
void push(int item);
int pop();
int peek();
int isEmpty();
void display();

int main()
{
	int po,pe;
	push(3);
	push(4);
	push(5);
	display();
	po = pop();
	printf("pop item is %d\n",po);
	printf("peek  irem is %d\n",peek());
	display();
	
}

void push(int item)
{
	struct node *tmp;
	tmp = (struct node *)malloc(sizeof(struct node));
	if (tmp==NULL)
	{
		printf("stack overflow");
		return;
	}
	tmp->info = item;
	tmp->link=top;
	top = tmp;
}
int pop()
{

	struct node *tmp;
	int item;
	if(isEmpty())
	{
		printf("stack underflow");
		exit(1);
	}
	tmp = top;
	item = tmp->info;
	top = top->link;
	free(tmp);
	return item;
}
int peek()
{
	if(isEmpty())
	{
		printf("stack underflow");
		exit(1);
	}
	return top->info;
}
void display()
{
	struct node *ptr;
	if(isEmpty())
	{
		printf("stack is empty");
		return;
	}
	ptr=top;
	while(ptr!=NULL)
	{
		printf("%d\t",ptr->info);
		ptr = ptr->link;
	}
	}
int isEmpty()
{
     if(top==NULL)
     	return 1;
     else
     	return 0;
 }
