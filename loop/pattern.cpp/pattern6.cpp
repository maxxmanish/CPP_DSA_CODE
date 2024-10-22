#include<iostream>
using namespace std;
void pattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }

        for(int j=1;j<=2*n-2*i-1;j++){
            cout<<" ";
        }

        for(int j=i;j>=1;j--){
            cout<<j;
        }
cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    pattern(n);
}