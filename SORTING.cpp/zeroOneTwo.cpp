#include<iostream>
using namespace std;
void get_value(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
void set01(int arr[],int n){
    int zero = 0;
    int one = 0;
    int two = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==0) zero = zero+1;
        else if(arr[i]==1) one +=1;
        else two +=1;
    }
    // cout<<"0 = "<<zero<<endl;
    // cout<<"1 = "<<one<<endl; 
    // cout<<"2 = "<<two<<endl;
    for(int i=0;i<n;i++){
        if(i<zero) arr[i]=0;
        else if(i<zero+one) arr[i]=1;
        else  arr[i] = 2;
    }
    
    
}
void display_set01(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int  arr[100];
    int n;
    cout<<"enter the size..";
    cin>>n;
    get_value(arr,n);
    set01(arr,n);
    display_set01(arr,n);
}