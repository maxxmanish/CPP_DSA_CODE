// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// void selection(int  arr[],int n){
//   int  i = 0;
//   int j = n-1;
   
//   while(i<j){
//    int min = INT_MAX;
//    int mindex = 0;
//     for(int k=i;k<n;k++){
//         if(arr[k]<min){
//              min = arr[k];
//              mindex = k;
//         }
//     }
//      swap(arr[i],arr[mindex]);
//     i++;
//   }
  
// }

void swap(int a,int b){
    a = (a+b) - a;
    b = (a+b) - b;
}

// void selection(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         int mindex = 0;
//         int min = INT_MAX;
//         for(int j=i;j<n;j++){
//             if(arr[j]<min) {
//                 min = arr[j];
//                 mindex = j;
//             }
//         }
//         swap(arr[i],arr[mindex]);
//     }
// }
// void print(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// void get_value(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
// }
// int main(){
//     int arr[1432];
//     int n;
//     cout<<" enter the size";
//     cin>>n;
//     get_value(arr,n);
//    selection(arr,n);
//    print(arr,n);
// int a,b;
// cout<<"enter the a and b values :";
// cin>>a>>b;
 
//     }









