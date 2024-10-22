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
class LinkedList{
    public:
    Node* head;
    int size;
    LinkedList(){
        head = NULL;
        size = 0;
    }
    void insertAtHead(int data){
        Node* temp = new Node(data);
        if(size == 0){
            head = temp;
        }
        else{
            temp->next = head;
            head =temp;
        }
        size++;
    }
    void insertAtTail(int data){
        Node* temp = new Node(data);
        if(size== 0 ){
            head = temp;
        }
        else{
            Node* tep = head;
            for(int i=1;i<=size-1;i++) tep = tep->next;
            tep->next = temp;
        }
        size++;
    }
    void Display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    void insertAt(int idx,int data){
        if(idx<0 || idx>size) cout<<"Invalide index";
        else if(idx == 0) insertAtHead( data);
        else if(idx == size) insertAtTail( data);
        else{
            Node* temp = new Node(data);
            Node* tep = head;
            for(int i=1;i<=idx;i++) tep = tep->next;
            temp->next = tep->next;
            tep->next = temp;
            size++;
        }
    }
    void deletAtHead(){
        head = head->next;
        size--;
    }
    void deletAtTail(){
        Node* temp = head;
        for(int i=1;i<size-1;i++) temp = temp->next;
        temp->next = NULL;
        size--;
    }
    void deletAt(int idx){
        if(size == 0) cout<<" list is empty";
        else if(idx <0 || idx>size) cout<<"invalide index";
        else if(idx == 0) deletAtHead();
        else if(idx == size-1) deletAtTail();
        else{
            Node* temp = head;
            for(int i=1;i<= idx-1;i++){
                temp  = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }
    
};
int main(){
    LinkedList ll;
    ll.insertAtHead(10);
      ll.insertAtHead(20);
        ll.insertAtHead(30);
        ll.insertAtTail(40);
        ll.insertAtTail(50);
        ll.insertAt(3,90);
      ll.deletAt(3);
        
        ll.Display();
    
}