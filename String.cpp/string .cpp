#include<iostream>
using namespace std;
 void print(string &name){
    int n = name.length();
    for(int i=0;i<n;i++){
        if(i&1==1) name[i] = '#';
    }
 }
 int main(){
    string name;
    cout<<"enter your name:";
    cin>>name;
    print(name);
    cout<<name;

 }