#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left,*right;
    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};
Node* BinaryTree(){
    int x;
    cin>>x;   
    if(x==-1) return NULL;
    Node* temp = new Node(x);
    cout<<"enter the left child "<<x<<":";
    temp->left = BinaryTree();
    cout<<"enter the right child "<<x<<":";
    temp->right = BinaryTree();
    return temp;
}
int main(){
cout<<"enter the root not value";
Node* root;
root = BinaryTree();
}