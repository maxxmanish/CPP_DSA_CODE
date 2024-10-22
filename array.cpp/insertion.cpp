#include<iostream>
using namespace std;
void insertion(int arr[],int n){
    for(int i=1;i<n;i++){
        int j = i;
        while(j>=1){
            if(arr[j-1]>arr[j]) swap(arr[j-1],arr[j]);
            j--;
        }
    }
}
int main(){
    int arr[34];
    int n;
    cout<<"enter the size";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertion(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}