#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
    ~Node(){
        cout<<" linked list";
    }
};
int main(){
    Node* a = new Node(20); 
    Node* b = new Node(30);
    Node* c = new Node(40);
    a->next = b;
    b->next = c;
    cout<<(a->data);

}