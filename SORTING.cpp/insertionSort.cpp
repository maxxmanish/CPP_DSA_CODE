#include<iostream>
using namespace std;
void insertion(int arr[],int n){
    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1){
            if(arr[j]>=arr[j-1]) break;
            if(arr[j]<arr[j-1]) {
                swap(arr[j],arr[j-1]);
                j--;
        }
        }
    }
}
void get_value(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
void print_array(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
     int arr[100];
    int n;
    cout<<"enter the  size..";
    cin>>n;
    get_value(arr,n);
    insertion(arr,n);
    print_array(arr,n);
    

}


// #include<iostream>
// using namespace std;
// void insertion(int arr[],int n){
//     for(int i=1;i<n;i++){
//       for(int j=j;j>=1;j--){
//         if(arr[j]>=arr[j-1]) break;
//         if(arr[j]<=arr[j-1]) swap(arr[j],arr[j-1]);
//       }
//     }
// }
// void get_value(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
// }
// void print_array(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//      int arr[100];
//     int n;
//     cout<<"enter the  size..";
//     cin>>n;
//     get_value(arr,n);
//     insertion(arr,n);
//     print_array(arr,n);
    

// }

