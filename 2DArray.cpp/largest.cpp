#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// int main(){
//     int arr[2][3];
//     cout<<"enter the matrix";
// for(int i=0;i<2;i++){
//     for(int j=0;j<3;j++){
//         cin>>arr[i][j];
//     }
// }
// for(int i=0;i<2;i++){
//     for(int j=0;j<3;j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
   
// }
//  cout<<"so this is a 2D matrix"<<endl;
//  int max = 0;
//  for(int i=0;i<2;i++){
//     for(int j=0;j<3;j++){
//         if(arr[i][j]>max) max = arr[i][j];
//     }
    
   
// }
// cout<<"the largest number is "<<max;
// }

  


//   there is optimal solution

void largest(int arr[],int n){
   
    for(int i=0;i<n-1;i++){
        int max = INT_MIN;
        int min = INT_MIN;
        for(int j=0;j<n;j++){
            if(arr[j]>max){
                max = arr[j];
            }
        }
    
    }
}
int main(){
    int n;
    int arr[423];
    cout<<" enter the size";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    largest(arr,n);
}
