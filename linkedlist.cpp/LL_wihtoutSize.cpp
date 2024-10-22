#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data  = data;
        this->next = NULL;
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
        }
    }
    void insertAtTail(int data){
        Node* temp = new Node(data);
        if(head == NULL){
            head = temp;
        }
        else{
            Node* tep = head;
            while(tep->next!=NULL) tep = tep->next;
            tep->next = temp;
            
        }
    }
    void insertAt(int idx,int data){
        Node* new_node = new Node(data);
        if(head == NULL) insertAtHead(data);
        else if(idx<0) cout<<"invalide index";
        Node* temp = head;
        int count = 0;
        while(temp->next!=NULL && count<idx-1){
            count++;
            temp = temp->next;
        }
        new_node->next = temp->next;


        else {
            Node* temp = head;
            

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
    void deletAtHead(){
        if(head==NULL) {
            cout<<"List is Empty ";
            return;
        }
        head = head->next;
    }
    void deletAtTail(){
        Node* temp = head;
        while(temp->next!=NULL) temp = temp->next;
        Node* tep = head;
        while(tep->next !=temp) tep = tep->next;
        tep->next = NULL;
    }
    void deletAt
};
int main(){
 LinkedList ll;
 ll.insertAtHead(10);
 ll.insertAtTail(20);
 ll.insertAtTail(30);
 ll.insertAtTail(40);

 ll.deletAtHead();
 ll.deletAtTail();
 ll.deletAtTail();
 ll.deletAtTail();

 ll.Display();
}