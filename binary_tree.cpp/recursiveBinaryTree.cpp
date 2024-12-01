#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left,*right;
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* BinaryTree(){
    int x;
    cin>>x;
    if(x==-1) return NULL;

    Node* temp = new Node(x);
    
    cout<<"enter left child value "<<temp->data<<":";
    temp->left = BinaryTree();
    cout<<"enter right child value "<<temp->data<<":";
    temp->right = BinaryTree();
    return temp;
}
int main(){
    cout<<"enter the root value";
    Node* root;
    root = BinaryTree();
}