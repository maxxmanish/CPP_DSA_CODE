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
class Stack {
    Node* head;
    public:
    int size;
    Stack(){
        head = NULL;
        size = 0;
    }
    void push (int data){
        Node* temp = new Node(data);
        if(head == NULL) head = temp;
        else {
            temp->next = head;
        }
        size++;
    }
    void pop()
    {
         if(head == NULL){
            cout<<"Stack";
         }
        head = head->next;
        size--;
    }
    void print(Node* temp){
        if(temp==NULL) return;
        print(temp->next);
        cout<<temp->data<<" ";
        
    }
    void Display(){
        Node* temp = head;
        print(temp);
        cout<<endl;
    }
};
int main(){
    Stack ss;
    ss.push(20);
    ss.push(30);
    ss.push(40);
    ss.push(50);
    ss.push(60);
    ss.pop();
    ss.Display();

}