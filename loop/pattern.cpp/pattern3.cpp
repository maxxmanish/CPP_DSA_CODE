#include<iostream>
using namespace std;
void pattern(int n){

    for(int i=0;i<=n-1;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        } 

        for(int j =0;j<(2*i+1);j++){
            cout<<"*";
        }

        for(int k=0;k<=n-i-1;k++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<(2*n-(2*i+1));j++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }

}
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
     pattern(n);
    pattern1(n);
}