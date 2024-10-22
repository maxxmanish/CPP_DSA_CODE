// #include<iostream>
// using namespace std;
// class Stack{
//     int* arr;
//     int top;
//     public:
//     Stack(int n){
//         arr = new int[n];
//         top = -1;
//     }
//     void push(int n){
//         if(top == n-1){
//             cout<<"stack is overflow"<<endl;
//             return;
//         }
//         top++;
//         arr[top] = n;
    
// }
// void pop(){
//     if(top == -1){
//         cout<<"stack is empty"<<endl;
//         return;
//     }
// top--;
// }
// int top(){
//     top 
// }
// }

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){
 stack<int> stack;
 stack.push(23);
 stack.push(43);
 stack.push(34);
 stack.push(654);
 int num = stack.size();
 cout<<num<<" size of stack and the top element :"<<stack.top();
 
}


