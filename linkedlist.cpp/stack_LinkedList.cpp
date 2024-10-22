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
    private:
    Node* head;
    public: 
    int size;
    Stack(){
        head = NULL;
        size = 0;
    }
    void push(int data){
        Node* temp = new Node(data);
        if(size==0){
            head = temp;
        }
        else {
            Node* tep = head;
            while(tep->next!=NULL) tep = tep->next;
            tep->next = temp;
            
        }
        size++;
    }
    void pop(){
       if(size==0) cout<<"list is empty";
       else{
           Node* temp = head;
           for(int i=1;i<size-1;i++) temp = temp->next;
           temp->next = NULL;
           size--;
       }
    }
    void Display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp = temp->next;
        }
        cout<<endl;
    }
    int peak(){
        Node* temp = head;
        while(temp->next!=NULL) temp =temp->next;
        return temp->data;
        }
    bool Empty(){
        if(size==0) return true;
        else return false;
    }
 
};
int main(){
    Stack ss;
    ss.push(20);
    ss.push(30);
    ss.push(40);
    
    ss.push(55);
    
    ss.Display();
    cout<<ss.size<<endl;
    Stack temp;
    while(ss.size>0){
        // cout<< ss.peak()<<" ";
            cout<<ss.top()<<" ";
        temp.push(ss.top());
    
        ss.pop();
    }
    cout<<ss.Empty();
    
}