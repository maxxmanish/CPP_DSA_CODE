// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3];
//     cout<<"enter the element :";
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>arr[i][j];
//         }
//     }

//       for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// int sum = 0;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             if(((i,j)==(0,0))||((i,j)==(2,2))||((i,j)==(3,3))){
//                 sum = sum + arr[i][j];
//             }
//         }
        
//     }
//     cout<<sum;
    
// }


#include<iostream>
using namespace std;
void pettern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            cout<<"#";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter no.";
    cin>>n;
    pettern(n);
}