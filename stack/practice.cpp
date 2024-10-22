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
class Stack{
    Node* head;
    public:
    Stack(){
        head = NULL;
    }
    void push(int data){
        Node* temp = new Node(data);
        if(head == NULL){
            head = temp;
            return;
        }
        Node* tepp = head;
        while(tepp->next!=NULL) tepp = tepp->next;
        tepp->next = temp;
        
    }
    void pop(){
        Node* temp = head;
        if(head == NULL){
            cout<<" stack is empty";
            return;
        }
        Node* tepp = head;
    while(temp->next!=NULL) temp = temp->next;
    while(tepp->next!=temp) tepp = tepp->next;
    tepp->next = NULL;

    }
    void Display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

};
int main(){
    Stack ss;
    ss.push(10);
    
}