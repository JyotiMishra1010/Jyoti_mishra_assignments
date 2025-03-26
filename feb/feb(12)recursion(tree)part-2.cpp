//recursion part-2


#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* left;
    node* right;
    node(int data){
        this->data=data;
        left = NULL;
        right = NULL;
    }
 
 
};

 
void inorder(node* head)
{
    if(head==NULL)
    {
        return;
    }
    inorder(head->left);
    cout<<head->data<<" ";
    inorder(head->right);
}
int main()
{ 
    node* head = new node(1);
    head->left=new node(2);
    head->right=new node(3);
    head->left->left=new node(4);
    head->left->right=new node(5);
    head->right->left=new node(6);
    head->right->right=new node(7);
    inorder(head);
    return 0;
}