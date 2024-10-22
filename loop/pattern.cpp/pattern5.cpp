#include<iostream>
using namespace std;
void pattern(int n){
    for(int i=1;i<=(2*n-1);i++){
        int start=i;
        if(i>n) start = 2*n-i;
        for(int j=1;j<=start;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    pattern(n);
}