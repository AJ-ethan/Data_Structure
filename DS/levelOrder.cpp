void levelOrder(Node * root) {
        int  rear=-1,font=-1;
        Node *queue[500];
        Node *ptr = root;
        if(ptr==NULL)
            return;
        if(font==-1)
            font = 0;
        rear = rear +1;
        queue[rear] = ptr;
        while(!(font==-1 || font==rear+1))
        {
            ptr = queue[font];
            font = font+1;
            printf("%d ",ptr->data);
            if(ptr->left!=NULL)
                {
                    rear = rear+1;
                    queue[rear] = ptr->left;
                }
            if(ptr->right!=NULL)
            {
                rear = rear+1;
                queue[rear] =ptr->right;
            }
            
                
        }
        }
