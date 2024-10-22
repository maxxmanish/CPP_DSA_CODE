// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// void selection(int arr[],int n){
//  for(int i=0;i<n;i++){
//     int min = INT_MAX;
//     int mindex = 0;
//     for(int j=i;j<n;j++){
//         if(arr[j]<min){
//             min = arr[j];
//             mindex = j;
//         }
//     }
//     swap(arr[i],arr[mindex]);
//  }
// }
// int main(){
//     int arr[3534];
//     int n;
//     cout<<"enter the size of array";
//     cin>>n;
//     cout<<"enter the element:";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     selection(arr,n);
//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//   }
    
// }










#include<iostream>
using namespace std;
int main(){
    // 11001101
    int arr[] = {1,1,0,0,1,1,0,1};
    int n = sizeof(arr)/4;
    int i = 0;
    int j = n-1;
    while(i<j){
        if(arr[i]==1 && arr[j]==0){
            swap(arr[i],arr[j]);
            i +=1;
            j -=1;
        }
        else if(arr[i]==1) i +=1;
        else j -=1;
    }
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
}
