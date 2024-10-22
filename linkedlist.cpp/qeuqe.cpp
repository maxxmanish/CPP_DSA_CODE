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
class Queues{
       Node* head;
    public:

   int size;
   Queues(){
    head = NULL;
    size = 0;
   }
   void inqueue(int data){
    Node* temp = new Node(data);
    if(size == 0) {
        head = temp;
    }
    else{
        Node* tep = head;
        while(tep->next!=NULL) tep = tep->next;
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
    void dequeue(){
        if(size==0) cout<<"queue is empty";
        else{
        head = head->next;
        size--;
        }
    }
    bool isEmpty(){
        if(size==0) return true;
        else return false;
    }
    int Front(){
        return head->data;
    }

};
int main(){
    Queues ll;
    ll.inqueue(10);
    ll.inqueue(12);
    ll.inqueue(30);
    ll.inqueue(40);
    ll.dequeue();
    ll.Display();
    cout<<" Front is "<<ll.Front();
}