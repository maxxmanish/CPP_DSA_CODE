#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void Delete(Node* head,Node* target){
    Node* temp = head;
    while(temp->next != target) temp = temp->next;
    temp->next = temp->next->next;
    
}
void print(Node* head){
    Node* temp = head;
    while(temp->next != NULL){
        cout<<temp->data<<" ";
         temp = temp->next;
    }
    cout<<endl;
    
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(140);
    Node* e = new Node(105); 
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    Delete(a,c);
    print(a);



}