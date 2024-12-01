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
Node* insert(Node* root,int target){
    if(!root){
        Node* temp = new Node(target);
        return temp;
    }
    if(target<root->data){
        root->left = insert(root->left,target);
    }
    else{
        root->right = insert(root->right,target);
    }
    return root;
}
void in_order(Node* root){
    Node* temp = root;
    if(temp==NULL) return;
    in_order(temp->left);
    cout<<temp->data<<" ";
    in_order(temp->right);
    
}
int main(){
    int arr[] = {6,3,17,5,11,18,2,1,20,14};
    Node* root = NULL;
    for(int i=0;i<sizeof(arr)/4;i++){
        root = insert(root,arr[i]);
    }
    in_order(root);
}
 
