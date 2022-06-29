#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node *newnode(int item)
{
	struct node* temp = (struct node *)malloc(sizeof(struct node));
 	temp->data = item;
 	
 	temp->left = NULL;
 	temp->right = NULL;
 	return temp;
}

void preorder(struct node *ptr)
{
	if(ptr==NULL)
		return;
	printf("%d  ",ptr->data);
	preorder(ptr->left);
	preorder(ptr->right);
}

int main()
{
	struct node *first = newnode(1);
	int i;
	first->right = newnode(4);
	first->left = newnode(3);
	
	preorder(first);
}
