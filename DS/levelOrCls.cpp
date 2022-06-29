#include <bits/stdc++.h>

using namespace std;
	
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
                }

               return root;
           }
        }
/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};
*/

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

}; //End of Solution

int main() {
    
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
  
    myTree.levelOrder(root);

    return 0;
}

