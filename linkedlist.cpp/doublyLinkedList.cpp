#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
class LinkedList{
     Node* head;
    public:
    LinkedList(){
        head = NULL;
    }
    void insertAtHead(int data){
        Node* temp = new Node(data);
        if(head == NULL){
         head = temp;
        }
        else{
            temp->next = head;
            head = temp;
            head->prev = NULL;

        }
    }
    void insertAtTail(int data){
        Node* temp = new Node(data);
        if(head ==NULL){
            head = temp;
        }
        else {
            Node* tempp = head;
            while(tempp->next != NULL) tempp = tempp->next;
            tempp->next = temp;
            temp->prev = tempp;
        }
    }
    void insertAt(int idx, int data){
         Node* temp = head;
         int count = 0;
         while(temp->next != NUL) {
            count++;
            temp = temp->next;
         }
        if(head ==NULL){
            cout<<"List is empty";
            return;
        }
        else if(idx==0) insertAtHead(data);
        else if(idx==count) insertAtTail(data);
        else{
            
        }
    }
    void Dispaly(){
        Node* temp = head;
        while(temp!= NULL){
            cout<<temp->data<<" ";
             temp = temp->next;
        }
        cout<<endl;
    }
 

};
int main(){
    LinkedList ll;
    ll.insertAtHead(10);
    ll.insertAtHead(20);
    ll.insertAtTail(30);
    ll.Dispaly();
}