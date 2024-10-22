// #include<iostream>
// using namespace std;
// void set0(int  arr[],int n){
// for(int i=0;i<n;i++){
//   for(int j=0;j<n-1-i;j++){
//     if(arr[j]<arr[j+1] && arr[j]==0){
//       swap(arr[j],arr[j+1]);
//     }
//   }
// }




// }
// void get_value(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
  
// }
// void print(int arr[],int n){
//      for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//   int n;
//     int arr[213];
//     cout<<"enter the  size";
//     cin>>n;
//     get_value(arr,n);
//     set0(arr,n);
//     print(arr,n);

// }
  

  // there is optimal solution 

  #include<iostream>
using namespace std;
void set0(int  arr[],int n){
for(int i=0;i<n;i++){
  for(int j=0;j<n-1-i;j++){
    if( arr[j]==0){   // only this is the diffrent thing  only
      swap(arr[j],arr[j+1]);
    }
  }
}




}
void get_value(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  
}
void print(int arr[],int n){
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
  int n;
    int arr[213];
    cout<<"enter the  size";
    cin>>n;
    get_value(arr,n);
    set0(arr,n);
    print(arr,n);

}

