#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* Next;
    Node(int data ){
        this->data = data;
        this->Next = NULL;
    }
};
void display(Node* head){
    // int  count = 0;
Node* temp = head;
while(temp!=NULL){
    cout<<temp->data<<" ";
    // if(temp->Next==NULL) break;
    temp = temp->Next;
    // count++;
}
cout<<endl;
// cout<<" the size  of linked list is "<<count;
}
int  size(Node* head){
    int n = 0;
    Node* temp = head;
    while(temp!=NULL){
       
        temp = temp->Next;
         n +=1;

    }  

    return n;
}
void insertAtEnd(Node* head,int var){
  Node* t = new Node(var);
  while(head->Next!= NULL) head = head->Next;
  head->Next = t;
}
int main(){
   Node* a = new Node(10);
   Node* b = new Node(20); 
   Node* c = new Node(30);
   Node* d = new Node(40);
   a->Next = b;
   b->Next = c;
   c->Next = d;
   display(a);
   cout<<size(a)<<endl;
   insertAtEnd(a,30);
   display(a);
   insertAtEnd(a,23);
   display(a);
   

    // Node* temp = a;
    // // cout<<temp->data;
    // while(1){
    //     cout<<temp->data<<" ";
    //     // if(temp->Next==NULL) break;
    //     temp = temp->Next;
    // }

//    while(true){
//     cout<<temp->data;
//     if(temp->Next==NULL) break;
//     temp = temp->Next;
//    }



}