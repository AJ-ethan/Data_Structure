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
struct node *insert(struct node *n, int key) {
  if (n== NULL) 
  	return newnode(key);
  if (key < n->data)
    n->left = insert(n->left, key);
  else
    n->right = insert(n->right, key);
  return n;
}
int search(int x, struct node *root)
{
    if (root == NULL)
    	return -1;
	if (x == root->data)
    		return root->data;
	if (x < root->data )
    		return search(x,root->left);
	if (x > root->data)
    		return search(x,root->right);
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
	first = insert(first,8);
	
	preorder(first);
	int a = search(3,first);
	
}
