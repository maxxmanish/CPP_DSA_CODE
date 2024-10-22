#include<iostream>
using namespace std;
// void print(int arr[],int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-1-i;j++){
//             if(arr[j]<arr[j+1]) swap(arr[j],arr[j+1]);
//         }
//     }
//      for(int i=0;i<n;i++){
//      cout<<arr[i]<<" ";
//     }
// }
void optimal_solution(int arr[],int n){

    for(int i=0;i<n;i++){
        int flag =0;
        for(int j=n-1;j>=1+i;j--){
            if(arr[j]>arr[j-1]) {
                flag =1;
                swap(arr[j],arr[j-1]);
            }
        }
        if(flag==0) return;
    }  


    for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";
    }
}
void get_value(int arr[],int n){
    for(int i=0;i<n;i++){
     cin>>arr[i];
    }
}
int main(){
    int arr[234];
    int n;
    cout<<"enter the size";
    cin>>n;
    get_value(arr,n);
    // print(arr,n);
    optimal_solution(arr,n);
}