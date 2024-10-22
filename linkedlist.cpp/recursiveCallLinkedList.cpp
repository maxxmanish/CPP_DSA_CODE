#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* Next;
    Node(int data){
        this->data = data;
        Next = NULL;
    }
};
void dispaly(Node* temp){
    // Node* temp = head;
    if(temp==NULL) return;
    cout<<temp->data<<" ";
    //  temp = temp->Next;
    dispaly(temp->Next);

}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    a->Next  = b;
    b->Next = c;
    c->Next = d;
    d->Next = e;

    dispaly(a);
}