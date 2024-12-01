// #include <iostream>
// #include <bits/stdc++.h>
// #include <queue>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *left, *right;
//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// int main()
// {
//     int x;
//     cout << "enter the root element :";
//     cin >> x;
//     int first, second;
//     queue<Node *> q;
//     Node *root = new Node(x);
//     q.push(root);
//     while (!q.empty())
//     {
//         Node *temp = q.front();
//         q.pop();
//         cout << "enter the left value " << temp->data<<":";
//         cin >> first;
//         if (first != -1)
//         {
//             temp->left = new Node(first);
//             q.push(temp->left);
//         }
//         cout << "enter the right value " << temp->data<<":";
//         cin >> second;
//         if (second != -1)
//         {
//             temp->right = new Node(second);
//             q.push(temp->right);
//         }
//     }
// }
#include<iostream>
#include<queue>
#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
     int data;
     Node* right, *left;
     Node(int data){
        this->data = data;
        left = right =NULL;
     }
};
int main(){
    int x;
    cout<<"enter the root value ";
    cin>>x;
    int first,second;
    Node* root = new Node(x);
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
      Node* temp = q.front();
      q.pop();
      cout<<"enter the left value "<<temp ->data<<":";
      cin>>first;
      if(first!=-1){
        temp->left = new Node(first);
        q.push(temp->left);
      }
      cout<<"enter the right value" << temp->data<<":";
      cin>>second;
      if(second!=-1){
        temp->right = new Node(second);
        q.push(temp->right);
      }

    }
}