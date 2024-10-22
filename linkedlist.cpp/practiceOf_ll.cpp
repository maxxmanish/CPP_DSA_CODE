#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    NOde(int data){
        this->data = data;
        this->next = nullptr;
    }
};
class LinkedList{
    Node* head;
    public: 
    LinkedList(){
        head = nullptr;
    }
    void inserAtHead(int data){
        Node* temp = new Node(data);
        if(head == nullptr) {
            head = temp;
            return;
        }
        temp->next = head;
        head =temp;
    }
    void insertAtTail(int data){
        Node* temp = new Node(data);
        if(head == nullptr){
            head = temp;
            return;
        }
        Node* tepp = head;
        while(tepp->next!=nullptr) tepp =tepp->next;
        tepp->next =temp;

    }
    void insertAt(int idx,int data){
        Node* temp = new Node(data);
        if(idx == 0) inserAtHead(data);
        else if(idx<0) cout"invalide Index";
        else {
            int count = 0;
            Node* tepp  = head;
            while (tepp->next!=nullptr && count<idx-1){
             tepp = tepp->next;
            }
            temp->next = tepp->next;
            
          
            
    }
    

}