// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node(int data){
//         this->data = data;
//         next = NULL;
//     }
// };
// class LinkedList{
//     public:
//     Node* head;
//     Node* tail;
//     int size;
//     LinkedList(){
//         head = NULL;
//         tail = NULL;
//         size = 0;
//     }
    
//     void insertAtEnd(int var){
//      Node* temp = new Node(var);
//      if(size == 0) head =tail = temp;
//      else {
//         tail->next = temp;
//         tail = temp;
//      }
//      size++;
//     }

//     void display(){
//         Node* temp = head;
//         while(temp!=NULL){
//          cout<<temp->data<<" ";
//          temp = temp->next;
//         }
//     }
//     void insertAtHead(int var){
//         Node* temp  = new Node(var);
//         if(size == NULL){
//             head = tail = NULL;
//         }
//         else{
//             temp->next = head;
//             head = temp;
//         }
//         size +=1;
//     }
//     void insertAt(int idx,int var){
//         if(idx==0) insertAtHead(var);
//         else if(idx == size) insertAtEnd(var);
//         else if(idx<0 || idx>size) cout<<"invalid fill correct index"<<endl;
//         else{
//             Node* t = new Node(var);
//             Node* temp = head;
//             for(int i=1;i<=idx-1;i++){
//                 temp = temp -> next;
//             }
//             t->next = temp->next;
//             temp->next = t;
//         }
//         size++;
//     }
    
// };
// int main(){
//     LinkedList ll;
//     ll.insertAtEnd(232);
//     // ll.insertAtHead(23);    
//      ll.insertAtEnd(23);
//       ll.insertAtEnd(22);
//        ll.insertAtEnd(32);
//         ll.insertAtEnd(432);
//          ll.insertAtEnd(22);
//           ll.insertAtEnd(232);
//            ll.insertAtEnd(232);
//            ll.insertAtHead(420);
    
//     // ll.display();
//     ll.insertAt(3,88);
     
//     ll.display();

// }



#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int  data){
        this->data =data;
        this->next = NULL;
    }
};
class LinkedList{
    public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }
    void insertAtHead (int data){
        Node* temp = new Node(data);
        if(size == 0){
            head = tail = temp;

        }
        else {
            temp->next = head;
            head = tail;
        }
        size++;
    }
    void insertAtTail(int data){
        Node* temp = new Node(data);
        if(size == 0){
           head = tail = temp;
        }
        else {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void insertAt(int idx, int var){
        if(idx == 0) insertAtHead( var);
        else if(idx == size) insertAtTail( var);
        else if (idx<0 || idx >size) cout<<"invalide index";
        else {
            Node* value = new Node(var);
            Node* temp = head;
            for(int i=1;i<idx;i++) temp = temp->next;
            value->next = temp->next;
            temp->next = value;
            size++;
        }
    }
    void Display(){
        if(size == 0) cout<<"list is empty";
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" "<<endl;
            temp = temp->next;
        }
        cout<<endl;
    }
  int  getIdx(int idx){
    Node* temp = head;
    if(size==0){ cout<<"LinkedList is empty";
    return -1;
    }

    else if(idx<0 || idx>size) {
        cout<<"Invalide index";
        return -1;
    }
    else{
    for(int i=0;i<idx;i++) temp = temp->next;
    return temp->data;
    }
  }
  void deletAtHead(){
    Node* temp = head;
    temp = temp->next;
    head = temp;
    size--;
  }
  void deletAtTail(){
  Node* temp = head;
  if(size == 0) {
    cout<<"list is empty";
    return;
  }
  while(temp->next!=tail) temp = temp->next;
  temp->next = NULL;
  tail = temp;
  size--;
  }
  void deletAt(int idx){
  if(size == 0) cout<<"list is empty";
  else if(idx<0 || idx>size) cout<<"invalide index";
  else if(idx == 0) return deletAtHead();
  else if(idx==size-1) return deletAtTail();
  else {
    Node* temp = head;
    for(int i=1;i<=idx-1;i++) temp = temp->next;
    temp->next = temp->next->next;
    size--;
  }
  }
  


};
int main(){
    LinkedList ll;
    ll.insertAtTail(20);
    ll.insertAtTail(30);
    ll.insertAtTail(40);
    ll.insertAtTail(50);
    ll.insertAtTail(60);
    ll.insertAtTail(70);
    ll.Display();
    ll.deletAt(3);
    ll.Display();
}


