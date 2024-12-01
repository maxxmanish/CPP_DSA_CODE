// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* left, *right;
//     Node(int data){
//         this->data = data;
//         left = right = NULL;
//     }
// };
// Node* BinaryTree(){
//     int x;
//     cin>>x;
//     if(x == -1) return NULL;
//     Node* temp = new Node(x);
//     cout<<"enter left child value "<<x<<":";
//     temp->left = BinaryTree();
//     cout<<"enter right child value "<<x<<":";
//     temp->right = BinaryTree();
//     return temp;

// }
// void  Display(Node* root){
//     Node* temp = root;
//     if(temp==NULL) return;
//     cout<<temp->data<<" ";
//     Display(temp->left);
//     Display(temp->right);


// }
// int main(){
//     cout<<"enter the root value";
//     Node* root;
//     root = BinaryTree();
//     Display(root);
// }

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* left, *right;
//     Node(int data){
//         this->data = data;
//         left = right = NULL;
//     }
// };
// Node* BinaryTree(){
//     int x;
//     cin>>x;
//     if(x == -1) return NULL;
//     Node* temp = new Node(x);
//     cout<<"enter left child value "<<x<<":";
//     temp->left = BinaryTree();
//     cout<<"enter right child value "<<x<<":";
//     temp->right = BinaryTree();
//     return temp;

// }
// void  pre_order(Node* root){
//     Node* temp = root;
//     if(temp==NULL) return;
//     cout<<temp->data<<" ";
//     pre_order(temp->left);
//     pre_order(temp->right);


// }
// void  in_order(Node* root){
//     Node* temp = root;
//     if(temp==NULL) return;
//     in_order(temp->left);
//     cout<<temp->data<<" ";
//     in_order(temp->right);


// }
// void  post_order(Node* root){
//     Node* temp = root;
//     if(temp==NULL) return;
//     post_order(temp->left);
//     post_order(temp->right);
//     cout<<temp->data<<" ";


// }

// int main(){
//     cout<<"enter the root value";
//     Node* root;
//     root = BinaryTree();
//     pre_order(root);
//     cout<<endl;
//     in_order(root);
//     cout<<endl;
//     post_order(root);

// }

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
Node* Binary_tree(){
    int x;
    cin>>x;
    if(x==-1) return nullptr;
    Node* temp = new Node(x);
    cout<<"enter left value";
    temp->left = Binary_tree();
    cout<<"enter the right value";
    temp -> right = Binary_tree();
    return temp;
}
int main(){
    cout<<"enter the root Node value";
    Node* root;
    root = Binary_tree();
}