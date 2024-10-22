#include<iostream>
using namespace std;
// int main(){
//     int n;
//     cout<<"enter n number";
//     cin>>n;
//     for(int i=1;i<=2*n-1;i +=2){
//         cout<<i<<endl;
//     }
// } 
// second approach 
int main(){
    int n;
    cout<<"enter n number";
    cin>>n;
    int a = 1;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a +=2;
    }
}