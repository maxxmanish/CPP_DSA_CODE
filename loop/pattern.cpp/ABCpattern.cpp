#include<iostream>
using namespace std;
void ABC(int n){
    for(int i=0;i<=n;i++){
        for(char ch = 'A';ch<=i + 'A';ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void downABC(int n){
    for(int i=0;i<=n;i++){
        for(char ch = 'A';ch<='A'+(n-i);ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    ABC(n);
    downABC(n);
}