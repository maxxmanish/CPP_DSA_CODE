#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data){
        this->data = data;
        next = NULL;
        prev = NULL;
    }
};
class LinkedList {
    public:
    Node* head;
    void insertAtHead(int data){
        Node* new_node = new Node(data);
        if(head==NULL){
            head = new_node;
        }
        else {
            new_node-> next = head;
            head->prev = NULL;
            head = new_node;
        }
    }
    void insertAtTail(int data){
        Node* new_node = new Node(data);
        if(head == NULL){
            head = new_node;
        }
        else{
            Node* temp = head;
            while(temp->next != NULL) temp = temp->next;
            temp->next = new_node;
            new_node->prev = temp;
        }
    }
    void Display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
         temp = temp->next;
        }
        cout<<endl;
    
    }
    void  revDispaly(){
          Node* temp = head;
          while(temp->next != NULL) temp = temp->next;
        while(temp!=NULL){
            cout<<temp->data<<" ";
         temp = temp->prev;
        }
        cout<<endl;
    }

};
int main(){
    LinkedList ll;
    ll.insertAtHead(10);
    ll.insertAtTail(20);
    ll.insertAtTail(30);
    ll.insertAtTail(40);
    ll.Display();
}