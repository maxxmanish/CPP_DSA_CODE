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
public:
Node* head;
 Node* top;
 int size;
 Stack(){
    top = NULL;
    head = NULL;
    size = 0;