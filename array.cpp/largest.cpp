// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// void vect(){
//     vector<int> it{12,4,5,6,7,8,9,54,4}
//     int p = it.sizeof();
//     cout<<p;
// }
// int main(){
// vect();
// }
// #include<iostream>
// using namespace std;
// void revers(){
//     int arr[];
//     int n;
//     int m;
//     cout<<"enter size of array=";
//     cin>>n;
//     cout<<"enter element of the array";
//     for(int i=0;i<n;i++){
//         cin>>arr[m];
//     }



    
//     for(int i=n-1;i>0;i--){
//         cout<<arr[i]<<" ";
//     }
    

// }
// int main(){
    
//     revers();
// }


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr(34);
//     int n;
//     cout<<"enter ths size of array";
//     cin>>n;
//     int  p  = 0;

//     for(int i=0;i<n;i++){
//         cin>>p;
//         push_back(p);
//     }
//     sort(arr.begin(),arr.end());
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }



#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr(124);
    int n;
    cout<<"enter the size";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    cout<<"largest element is "<<arr[n-1];
   
}






