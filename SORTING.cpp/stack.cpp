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
    int size;
    Stack(){
        head = NULL;
        size = 0;
    }
   void push(int data){
    Node* head = new Node(data);
    
   }

};
int main(){

}