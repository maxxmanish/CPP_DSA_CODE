#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n number";
    cin>>n;
    float a =100;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a = a/2;
    }
}