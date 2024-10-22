// this case is worst case 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of array";
//     cin>>n;
//     int arr[n];
//     cout<<"enter the element of the array";
//     for(int i=0;i<n;i++) cin>>arr[i];
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]>arr[j]){
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j]= temp;
//             }
//         }
//     }
//     for(int i=0;i<n;i++) cout<<arr[i]<<" ";
// }


// now we see optimiz case 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size ";
//     cin>>n;
//     int arr[n];
//     cout<<"enter no. element:-";
//     for(int i=0;i<n;i++) cin>>arr[i];
//     int flage = true;
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-1-i;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 flage = false;
//             }
//                  if(flage == true)  break;
//         }
   
//     }
//     for(int i=0;i<n;i++)  cout<<arr[i];
    
// }


#include<iostream>
using namespace std;
void Sort(int arr[],int n){
    bool flag = false;
    for(int i=0;i<n;i++){
            
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]) {
                flag  =  true;
                swap(arr[j],arr[j+1]);
            }
        }
        if(flag==true){
            break;
    }
}
if(flag == false) cout<<"array is sorted"<<endl;
else cout<<" array is not sorted"<<endl;
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
    Sort(arr,n);
    print_array(arr,n);
    
}