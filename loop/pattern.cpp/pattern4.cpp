#include<iostream>
using namespace std;
void pattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
        //     cout<<" ";
        // }

        // for(int j=0;j<(2*i+1);j++){
        //     cout<<"*";
        // }

        // for(int j=0;j<n-i-1;j++){
        //     cout<<" ";
        // }
        // cout<<endl;
        for(int k = 0;k<i+1;k++){
            cout<<" ";
        }

        for(int m=0;m<5-i*2;m++){
            cout<<"*";
        }

        for(int m=0;m<i+1;m++){
            cout<<" ";
        }
    }}
}
int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    pattern(n);
}