// #include<iostream>
// #include<vector>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node(int data1,Node* next1){
//         data  = data1;
//         next = next1;
//     }
// };
// int main(){
//     vector<int> arr = {212,2,3,23,12};
//     Node* y = new Node(arr[6],nullptr);
//     cout<<y->data;
// }


// #include <iostream>
// #include <vector>

// using namespace std;
// void print(vector<int>& vec){
//     int rows = vec.size();    // Number of rows
//     int cols = vec[0].size(); // Number of columns

//     cout << "Rows: " << rows << endl;
//     cout << "Columns: " << cols << endl;
    
//     cout<<endl;
//     for(int i=0;i<cols;i++){
//         for(int j=rows-1;j>=0;j--){
//             cout<<vec[j][i]<<" ";
//         }
//         cout<<endl;
//     }
// }

// int main() {
//     vector<vector<int>> vec = {
//         {1,2,3},{4,5,6},{7,8,9}
//     };

//     print(a)

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3]  = {1,2,3,4,5,6,7,8,9};
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             if( i+j==2)  cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//   int arr[3][3]  = {1,2,3,4,5,6,7,8,9};
//  int k=2;
//   for(int i=0;i<3;i++){
//     cout<<arr[i][k]<<" ";
//     k--;
// //   }
  

// }


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3]  = {1,2,3,4,5,6,7,8,9};
//     int k;
//     cout<<"enter k value";
//     cin>>k;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             if(arr[i][j]==k) cout<<i<<" "<<j;
            
//         }
//     }
// }



// #include<iostream>
// using namespace std;
// void evenOdd(int n){
//     if(n&1!=0)  cout<<"odd";
//     else cout<<"even";
// }
// int main(){
// int m;
// cout<<"enter the value";
// cin>>m;
// evenOdd(m);
// }


// #include<iostream>
// #include<string>

// using namespace std;
// int main(){
//     string name = "manish";
//     // reverse_iterator(name.being(),name.end
//     for(int  i=5;i>=0;i--){
//         cout<<name[i];
//     }

// }

// #include<iostream>
// using namespace   std;
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node(int Data,Node* Next){
//         data = Data;
//         next = Next;
//         Node* temp = next;
//         cout<<temp->data;  
//     }
// };
// void display(Node* head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }

// int main(){
// Node* A = new Node(10,A->next);
// Node* B = new Node(20,nullptr);
// Node* C = new Node(30,D);
// Node* D = new Node(40,E);
// Node* E = new Node(50,F);
// Node* F = new Node(50,nullptr);
// display(A);


// }









#include<iostream>
using namespace 